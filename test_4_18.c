#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//递归 但下面代码有问题
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//
//	unsigned int num = 0;
//	scanf("%u", &num);
//	//递归 - 函数自己调用自己
//	print(num);//print函数可以打印参数部分数字得每一位
//	return 0;
//}


//求字符串长度
#include <string.h>
//my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{count++;
//	str++;
//	}
//	return count;
//}
//
//int main()
//{
//
//	char arr[] = "hey";
//	//['h']['e']['y']['\0']
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//不允许创建临时变量，求字符串长度

//my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//
//}
//
//int main()
//{
//
//	char arr[] = "hey";
//	//['h']['e']['y']['\0']
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//n! 不考虑溢出

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	int ret = Fac(n);
//	
//	printf("%d\n", ret);
//	return 0;
//}

//求第n个斐波那契数
//递归可以求解 但是效率太低
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//改进 迭代
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}