#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//����p����һ��Ұָ��
//	//1.ָ��δ��ʼ��
//	//int* p; //p��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	//*p = 20;//�Ƿ������ڴ���
//
//	//2.Խ�����
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 10; i++) //i<=10 ������Χ�� Խ����
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//
//	//3.ָ��ָ��Ŀռ��ͷ�
//	return 0;
//}


//int main()
//{
//	//����֪��pӦ�ó�ʼ��ʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	//int* p = NULL;
//	////��ȷ֪����ʼ����ֵ
//	//int a = 10;
//	//int*ptr = &a;
//
//	//c���Ա������������Խ����Ϊ��
//
//	int* p = NULL;
//
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", &arr[9] - &arr[0]); // 9 ָ�� - ָ�루ǰ�᣺����ָ��ָ��ͬһ��ռ䣩 �õ���������ָ��֮���Ԫ�ظ���
//
//	return 0;
//}
#include<string.h>
//int main()
//{
//	//strlen() - ���ַ�������
//	int len = strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//my_strlen����ʵ��
//1.������
//2.�ݹ�
//3.ָ��-ָ��
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	//strlen() - ���ַ�������
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p <==> %p\n", %arr[i], p + i);
//		*(p + i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//������
//	printf("%d\n",2[arr]); //p[2]Ҳ����
//	printf("%d\n", arr[2]);
//
//	//arr[2] <==> * (arr+2) <==> * (p+2) <==>* (2+p) <==> * (2+arr) <==> 2[arr]
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//
//	//ppa����һ������ָ�����
//	int* *ppa = &pa;//paҲ�Ǹ�������&paȡ��pa���ڴ�����ʼ��ַ
//	int* **pppa = &ppa; //����ָ��
//
//	return 0;
//}

//int main()
//{
//	int arr[10];//�������� -������ε����������������
//	char ch[5];//�ַ����� - ��ŵ��ַ�
//	//ָ������ -  ���ָ�������
//	int* parr[5];//����ָ�������
//	char* pch[5]; //�ַ�ָ������
//}

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//��Ա����
//	struct B sb;
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//}s1,s2;//s1��s2Ҳ�ǽṹ�����
////s1,s2��ȫ�ֱ���
//
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'w',20,3.14}, "wty",20,"20081000210036" };//����
//
//	//. ->
//	printf("%c\n", s.sb.c);
//	printf("%s\n", s.id);
//
//	struct  Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//
//
//	return 0;
//}

struct B
{
	char c;
	short s;
	double d;
};

struct Stu
{
	//��Ա����
	struct B sb;
	char name[20];//����
	int age;//����
	char id[20];//ѧ��
};

void print1(struct Stu t)
{
	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}

void print2(struct Stu* ps)
{
	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}

int main()
{
	//s�Ǿֲ�����
	struct Stu s = { {'w',20,3.14}, "wty",18,"20081000210036" };//����
    //дһ��������ӡs������
	print1(s); //��ֵ����
	print2(&s);//��ַ����

	return 0;
}