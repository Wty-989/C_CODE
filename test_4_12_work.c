#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//编写程序数一下 1到 100 的所有整数中出现多少个数字9

//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			n++;
//		if (i / 10 == 9)
//			n++;
//	}
//
//	printf("%d\n", n);
//
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

//int main()
//{
//	int a = 0;
//	int b = 0;
//	double sum = 0;
//
//	for (a = 1; a <= 99; a += 2)
//	{ 
//		sum += 1.0 / a;
//	}
//	for (b = 2; b <= 100; b += 2)
//	{ 
//		sum -= 1.0 / b;
//	}
//
//	printf("%f ", sum);
//
//	return 0;
//}


//输出9*9乘法口诀

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= 9; a++)
//
//	{ 
//		for (b = 1; b <= a; b++)
//		{
//              printf("%d*%d=%d ", b, a, b*a);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜数字游戏
//#include <stdlib.h>
//
//void menu()
//{
//	printf("************************\n");
//	printf("******* 1. play  *******\n");
//	printf("******* 0. exit  *******\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//
//
//	return 0;
//}

//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//要查找的数字
	//在arr这个有序的数组中查找k(7)的值
	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素的个数

	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
	    int mid = (left + right) / 2;

		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了,下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到了\n");
	}
	return 0;
}
