#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//9
//	//函数
//	print_table(n);
//	//函数的起名很关键
//	return 0;
//}


//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba

//非递归
//
//my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//
//
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//递归方式
my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char* str)
{
	char tmp = *str;
	int len = my_strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	//判断条件
	if(my_strlen(str+1)>=2)
	{
		reverse_string(str + 1);
	}
	*(str + len - 1) = tmp;
	
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);//数组名arr是数组arr首元素的地址

	printf("%s\n", arr);//fedcba
	return 0;
}









//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//
//
//	printf("%d\n", sum);
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现。

//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//
//	int ret = Pow(n,k);
//	printf("%lf\n", ret);
//		return 0;
//}

//数组
//int main()
//{
//	//int arr[8];
//	//char ch[5];
//	int a = 10;//初始化
//
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	int arr2[10] = {1,2,3 };//不完全初始化
//	int arr3[] = { 1,2,3,4,5 };//[5]
//
//	char ch1[5] = { 'w','t','y' };
//	char ch2[] = { 'w','t','y' };
//
//	char ch3[5] = "wty";//w t y \0 0
//	char ch4[] = "wty";//w t y \0
//
//	char ch5[] = "wty";
//	//[w t y \0]
//	char ch6[] = { 'w','t','y' };
//	//[w t y]
//
//	printf("%s\n", ch5);
//	printf("%s\n", ch6);
//
//	printf("%d\n", strlen(ch5));//3
//	printf("%d\n", strlen(ch6));//随机值
//
//	return 0;
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	
//		printf("&arr[%d] = %p\n",i, &arr[i]); //%p - 是按地址打印 - 十六进制的打印
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int *p = arr;//数组名是数组首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	
//		printf("%d ",*p); //%p - 是按地址打印 - 十六进制的打印
//	}
//	return 0;
//}


//计算斐波那契数

//long long Fac(int N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fac(N - 1) + Fac(N - 2);
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n", Fac(i));
//	return 0;
//}