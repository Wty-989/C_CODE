#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//��ҵ2
//�������������Ƚ����ֵ
//MAX - һ�㲻������ȫ��дд����

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

//��ҵ3

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


//if ���
//int main()
//{
//	int age = 70;
//
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age < 26)
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age < 100)
//		printf("����\n");
//	else 
//		printf("����\n");
//
//	/*if (age >= 18)
//		printf("����\n");
//	else
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
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

//��ϰ �ж�һ�����Ƿ�������

//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("����\n");
//
//	return 0;
//
//}

//��ϰ ���1-100֮�������

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

//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//
//	return 0;
//}

//1-5��� ������
//6-7��� ��Ϣ��

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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//
//	return 0;
//}


//while���

//��ӡ1-10s����
//int main()
//{
//	int i = 1;
//	//��whileѭ���У�break�������õ���ֹѭ��
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
//	//��whileѭ���У�continue����������������ѭ��continue����Ĵ���
//	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
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


