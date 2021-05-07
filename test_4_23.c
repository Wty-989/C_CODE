#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	//////创建
//	//int arr[3][4];
//
//
//	////初始化 - 创建的同时赋值
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


//二位数组在数组中的存储
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

//void bubble_sort(int arr[],int sz)//形参arr本质是指针
//{
//
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
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
//	//排序为升序  - 冒泡排序:两两相邻的元素进行比较，并且可能的话需要交换
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);
//
//	return 0;
//}

//数组名是什么？
//数组名是数组首元素的地址
//但是有两个例外
//1.sizeof（数组名） - 数组名表示整个数组 - 计算的是整个数组的大小 单位是字节
//2.&数组名 - 数字名表示整个数组 - 取出的是整个数组的地址


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);//数组名是首元素的地址
//	return 0;
//}



void bubble_sort(int arr[], int sz)//形参arr本质是指针
{

	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;

		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
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
	//排序为升序  - 冒泡排序:两两相邻的元素进行比较，并且可能的话需要交换
	//计算数组元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);

	return 0;
}