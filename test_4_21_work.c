#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ʵ�ֺ����ж�year�ǲ�������
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
//	printf("������");
//	else
//		printf("��������");
//	return 0;
//}

//ʵ��һ��������������������������
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

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ǵݹ�
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

//�ݹ�
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

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen

//�ǵݹ�

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

//�ݹ�

int my_strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
		return 1 + my_strlen(1 + *str);
}