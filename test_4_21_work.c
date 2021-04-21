#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//实现函数判断year是不是闰年
//int is_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int j = is_year(i);
//		
//	if (j == 1)
//	printf("是闰年");
//	else
//		printf("不是闰年");
//	return 0;
//}

//实现一个函数来交换两个整数的内容
//
//void Swap(int *pa, int *pb)
//{
//	int tmp =*pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//
//
//	return 0;
//}

//递归方式实现打印一个整数的每一位
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
//	
//	print(num);
//	return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//非递归
//int Fac(int n)
//{
//	int ret = 1;
//	int m = 0;
//	for (m = 1; m <= n; m++)
//		ret *= m;
//	return ret;
//}
//
//int main()
//{
//	int i = 0;
//	
//	scanf("%d", &i);
//
//	int j = Fac(i);
//	
//	printf("%d\n", j);
//
//	return 0;
//}

//递归
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//
//int main()
//{
//	int i = 0;
//
//	scanf("%d", &i);
//
//	int j = Fac(i);
//
//	printf("%d\n", j);
//
//	return 0;
//}

//递归和非递归分别实现strlen

//非递归

int my_strlen(char* str)
{
	int count = 0;
	while ('\0' != *str)
	{
		count++;
		str++;
	}
	return count;
}

//递归

int my_strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
		return 1 + my_strlen(1 + *str);
}