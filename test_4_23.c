#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	//////����
//	//int arr[3][4];
//
//
//	////��ʼ�� - ������ͬʱ��ֵ
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//
//}


//��λ�����������еĴ洢
//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	int *p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d] = %p\n ", i,j,&arr[i][j]);
//	//	}
//	//	
//	//}
//
//
//	return 0;
//
//}

//void bubble_sort(int arr[],int sz)//�β�arr������ָ��
//{
//
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//����Ϊ����  - ð������:�������ڵ�Ԫ�ؽ��бȽϣ����ҿ��ܵĻ���Ҫ����
//	//��������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);
//
//	return 0;
//}

//��������ʲô��
//��������������Ԫ�صĵ�ַ
//��������������
//1.sizeof���������� - ��������ʾ�������� - ���������������Ĵ�С ��λ���ֽ�
//2.&������ - ��������ʾ�������� - ȡ��������������ĵ�ַ


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);//����������Ԫ�صĵ�ַ
//	return 0;
//}



void bubble_sort(int arr[], int sz)//�β�arr������ָ��
{

	//ȷ������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		int flag = 1;

		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{

	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//����Ϊ����  - ð������:�������ڵ�Ԫ�ؽ��бȽϣ����ҿ��ܵĻ���Ҫ����
	//��������Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);

	return 0;
}