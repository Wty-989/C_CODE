#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//作业2
//输入两个数，比较最大值
//MAX - 一般不建议用全大写写函数

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}

//作业3

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}


//if 语句
//int main()
//{
//	int age = 70;
//
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else 
//		printf("长寿\n");
//
//	/*if (age >= 18)
//		printf("成年\n");
//	else
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}*/
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//		else
//		{
//			printf("haha\n");
//		}
//
//	}
//
//	return 0;
//}

//int test()
//{
//	if (1)
//		return 0;
//	printf("hehe\n");
//
//	return 1;
//}
//
//int main()
//{
//
//	test();
//	return 0;
//}

//练习 判断一个数是否是奇数

//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("奇数\n");
//
//	return 0;
//
//}

//练习 输出1-100之间的奇数

//int main()
//{
//	int i = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (1 == i % 2)
//	//		printf("%d ", i);
//	//}
//
//	for (i = 1; i <= 100; i += 2)
//	{
//
//			printf("%d ", i);
//	}
//	return 0;
//}

//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//
//	return 0;
//}

//1-5输出 工作日
//6-7输出 休息日

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//}


//while语句

//打印1-10s数字
//int main()
//{
//	int i = 1;
//	//在while循环中，break用于永久的终止循环
//
//	/*while (i <= 10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	}*/
//
//	//在while循环中，continue的作用是跳过本次循环continue后面的代码
//	//直接去判断部分，看是否进行下一次循环
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;//
//printf("%d ", i);
// }
// return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && a > c && b > c)
//		printf("%d %d %d", a, b, c);
//	else if (a > b && a > c && c > b)
//		printf("%d %d %d", a, c, b);
//	else if (b > a && b > c && a > c)
//		printf("%d %d %d", b, a, c);
//	else if (b > a && b > c && c > a)
//		printf("%d %d %d", b, c, a);
//	else if (c > a && c > b && a > b)
//		printf("%d %d %d", c, a, b);
//	else
//		printf("%d %d %d", c, b, a);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for(i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int a, b;
//	int r;
//	scanf("%d%d", &a, &b);
//	if (b > a)
//	{
//		r = b; 
//		b = a;
//		a = r;
//	}
//	r = a % b;
//	while (r)
//	{
//		a = b;
//		b = r;
//		r = a % b;
//	}
//	printf("%d", b);
//	return 0;
//}


int main()
{
	int a = 1000;
	for (a = 1000; a <= 2000; a++)
		if (a % 4 == 0)
			printf("%d ", a);
	return 0;
}


