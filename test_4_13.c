#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
//д���뽫�����������Ӵ�С���

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d%d%d", &a, &b, &c);
//	//����˳��
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
//	//��� - ��С
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}
//���������������������������Լ��

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);// 24 18 ���Լ�����ᳬ��18
//	int max = 0;
//	//�������Լ������m��n �Ľ�Сֵ
//	if (m > n)
//		max = n;
//	else
//		max = m;
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ�����ǣ�%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}

//շת�����
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
//	printf("���Լ����%d\n", n);
//
//	//��С������ = m*n/���Լ��
//	return 0;
//}

//��ӡ1000-2000��֮�������

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�ǲ�������
//		//1.��4���������ܱ�100����������
//		//2.�ܱ�400����������
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

//��ӡ100-200��������ֻ�ܱ�1��������������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж��Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i�����ܲ�������
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
//	//a��b��һ��������һ��������<=��ƽ��m��
//	//16 = 2*8  = 4*4
//
//
//
//	for (i = 101; i <= 200; i+=2) //ż���϶��ܱ�2���������Կ϶���������
//	{
//		//�ж��Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i�����ܲ�������
//		int j = 0;
//		int flag = 1;//����i��������
//
//		//sqrt - �ǿ�ƽ������ - math.h
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
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

//�ػ�����
//ֻҪ�������������Ծ���һ�����ڹػ���������룺��������ȡ���ػ���
//
//shutdown -s -t 60
//shutdown -a ȡ���ػ�

#include <string.h>
#include <stdlib.h>
//int main()
//{
//	//�ػ�
//	//c�����ṩ��һ��������system()- ִ��ϵͳ�����
//
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");//system  - stdlib.h
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//
//	//string.h
//	if (strcmp(input,"������") == 0)//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp() string compare
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

//goto ���ֻ����һ��������Χ����ת�����ܿ纯��
//����ĳ�����error��
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
//	printf("%s", arr1); //��ӡarr1����ַ��� %s -���ַ�����ʽ��ӡ
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

//��ӡ100-200����
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