#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	//~��������λȡ��
//	//�����еĶ�����λ�е����֣�1��0��0��1 
//	//����a=0
//	//�����ƣ�
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111  ~a
//	//�������ڴ��д洢���ǲ���
//	//һ�������Ķ����Ʊ�ʾ�����֣�ԭ�롢���롢����
//	//-1���������ļ��㣩
//	//10000000000000000000000000000001��ԭ�룩
//	//11111111111111111111111111111110�����룩
//	//11111111111111111111111111111111�����룩
//	//��������ԭ�롢���롢������ͬ
//
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//int b = ++a;//ǰ��++ ��++����ʹ��
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//
//
//	int b = a++;//����++ ��ʹ�ã���++
//	printf("%d\n", b);//10
//	printf("%d\n", a);//11
//
//	return 0;
//}


//int main()
//{
//	//ǿ������ת��
//	int a = (int)3.14;
//	printf("%d\n", a);
//	
//	return 0;
//}

//��������������Ŀ��������
//exp1������exp2���㣬�������ʽ�Ľ���ǣ�exp2�Ľ��
//exp1��������exp3���㣬�������ʽ�Ľ���ǣ�exp3�Ľ��

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//
//	return 0;
//}


//���ű��ʽ
//int main()
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	       //a=5        c=1        b=3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//���ű��ʽ���Ǵ��������μ����
//	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
//
//	printf("%d\n", d);
//
//	return 0;
//}


//�±����Բ�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//[]�±����Բ�����
//
//	return 0;
//}

//�������ò�����
//int main()
//{
//	//���ú�����ʱ�򣬺���������ģ������Ǻ������õĲ�����
//	printf("hehe\n");//[]�±����Բ�����
//
//	return 0;
//}

//typedef unsigned int u_int;//����������
//
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//	return 0;
//}

//static -��̬��
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

//void test()
//{
//	static int a = 1;//a�Ǿֲ�����
//	a++;
//	printf("%d\n", a);
//
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//
//
//	return 0;
//}


//extern �����ⲿ����
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//
//
//	return 0;
//}

//��������
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

//define�Ǹ�Ԥ����ָ��

//1.define�������
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//
//	return 0;
//}

//2.define�����
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", 4*ADD(2,3));
//
//	return 0;
//}


//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�� - 4���ֽ�
//	printf("%p\n",&a);//%pר��������ӡ��ַ
//	int* pa = &a;//pa��������ŵ�ַ�ģ���c������pa����ָ�����
//	//* ˵��pa��ָ�����
//	//int˵��paִ�еĶ�����int��
//
//	char ch = 'w';
//	char* pc = &ch;
//
//
//	return 0;
//}

//ָ�� ���� ��ַ
//int main()
//{
//	int a = 10;
//	
//	int* pa = &a;
//
//	*pa = 20;//* �����ò��� *pa����ͨ��pa��ĵ�ַ���ҵ�a
//
//	printf("%d\n", a);
//
//
//	return 0;
//}

//int main()
//{
//	
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//ָ��Ĵ�С����ͬ��
//	//ָ��������ŵ�ַ
//	//ָ����Ҫ���ռ䣬ȡ���ڵ���Ĵ洢��Ҫ���ռ�
//
//	return 0;
//}


//�ṹ�������c���Դ����µ����ͳ���
//����һ��ѧ��

struct Stu
{
	char name[20];//��Ա����
	int age;
	double score;
};
//����һ���������

struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "����",20,85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
	struct Stu *ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա������
	
	return 0;

}