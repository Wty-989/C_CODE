#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

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


//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

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


//���9*9�˷��ھ�

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

//��������Ϸ
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
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//
//
//	return 0;
//}

//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//Ҫ���ҵ�����
	//��arr�������������в���k(7)��ֵ
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ���

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
			printf("�ҵ���,�±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����\n");
	}
	return 0;
}
