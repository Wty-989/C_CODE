#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	return 0;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		printf("%d ", *p);
//		++p;
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//
//
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;

		while (tmp)
		{
			
			tmp = tmp / 10;
			count++;
		}
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}