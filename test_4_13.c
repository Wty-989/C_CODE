#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
//写代码将三个整数按从大到小输出

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d%d%d", &a, &b, &c);
//	//调整顺序
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//输出 - 大到小
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}
//给定两个数，求这两个数的最大公约数

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);// 24 18 最大公约数不会超过18
//	int max = 0;
//	//假设最大公约数就是m和n 的较小值
//	if (m > n)
//		max = n;
//	else
//		max = m;
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数就是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//
//	while (t=m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数：%d\n", n);
//
//	//最小公倍数 = m*n/最大公约数
//	return 0;
//}

//打印1000-2000年之间的闰年

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//1.被4整除，不能被100整除是闰年
//		//2.能被400整除是闰年
//
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//打印100-200的素数（只能被1和它本身整除）
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是否为素数
//		//2->i-1之间的数字去试除i，看能不能整除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	//m = a*b
//	//a和b中一定至少有一个数字是<=开平方m的
//	//16 = 2*8  = 4*4
//
//
//
//	for (i = 101; i <= 200; i+=2) //偶数肯定能被2整除，所以肯定不是素数
//	{
//		//判断是否为素数
//		//2->i-1之间的数字去试除i，看能不能整除
//		int j = 0;
//		int flag = 1;//假设i就是素数
//
//		//sqrt - 是开平方函数 - math.h
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("heha\n");
//
//	goto flag;
//	return 0;
//}

//关机程序
//只要运行起来，电脑就在一分钟内关机，如果输入：我是猪，就取消关机！
//
//shutdown -s -t 60
//shutdown -a 取消关机

#include <string.h>
#include <stdlib.h>
//int main()
//{
//	//关机
//	//c语言提供了一个函数：system()- 执行系统命令的
//
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");//system  - stdlib.h
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//
//	//string.h
//	if (strcmp(input,"我是猪") == 0)//两个字符串比较是不能使用==的，应该使用strcmp() string compare
//	{
//		system("shutdown -a");
//
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//goto 语句只能在一个函数范围内跳转，不能跨函数
//下面的程序是error的
//void test()
//{
//flag:
//	printf("test\h");
//}
//
//int main()
//{
//
//	goto flag;
//	return 0;
//}


//f(x) = 2*x+1;
//f(x,y) = x+y;

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello 989";
//	strcpy(arr1, arr2);
//	printf("%s", arr1); //打印arr1这个字符串 %s -以字符串格式打印
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello 989";
//	memset(arr, 'x', 5);
//	
//	printf("%s\n", arr);
//
//	return 0;
//}

//打印100-200素数
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for(j=2;j<i;j++)
		{
			if (i%j == 0)
			{
               break;
			}
			
		}
		if (i == j)
		{
			printf("%d ", i);
			
		}
	}
	return 0;
}