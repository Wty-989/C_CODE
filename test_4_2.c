#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���������������
//�ֲ����������򣺾��Ǳ������ڵľֲ���Χ
//ȫ�ֱ�����������������
//�������������ڣ������Ĵ��������ٵ�ʱ���


//int g_val = 2021; //ȫ�ֱ���
//���ļ���ȫ�ֱ���ʹ��ǰ��Ҫ����һ��

//extern int g_val;
//
//int main()
//{
//	printf("1�� %d\n", g_val);
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//		printf("2�� %d\n", g_val);
//	}
//
//	printf("3�� %d\n", g_val);
//
//	return 0;
//
//}

//����

//#define MAX 10000
//
//int main()
//{
//	//1.���泣��
//	//3.14;
//	//10;
//	//"abcd"
//
//
//	//2.const���εĳ�����
//	//const int num = 10;//num���Ǳ��� - ���г����ԣ����ܱ��ı����ԣ�
//	//num = 20;
//	//printf("num = %d\n", num);//20
//
//	//int arr[10] = { 0 };//10��Ԫ��
//	//int n = 10;
//	//int arr2[n] = { 0 };//n�Ǳ����ģ����ﲻ��
//
//	//3.#define����ı�ʶ������
//	//int n = MAX;
//	//printf("n = %d\n", n);
//
//	
//
//	return 0;
//}

//�Ա�
//enum Sex
//{
//	//����ö�����͵ı�����δ������ȡֵ
//	MALE = 3,//����ֵ
//	FEMALE,
//	SECRET
//
//};
//
//int main()
//{
//	//4.ö�ٳ���
//	//����һһ�оٵĳ���
//
//	enum Sex s = MALE;
//	//MALE = 3,//error
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}


//�ַ�������һ���ַ� - ��˫������������һ���ַ�

//int main()
//
//{
//	//�ַ����� - ������һ����ͬ���͵�Ԫ��
//	//�ַ�����β������\0
//	//\0���ַ��������ı�־
//	//char arr[] = "hello";
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//
//	//��һ���ַ����ĳ���
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//��ӡ�ַ���
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//
//
//	return 0;
//}



//ѡ�����

//int main()
//{
//	int input = 0;//�����ֵ
//	printf("����ȥʵ����:>\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)?>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("���һ�Ƚ�ѧ��\n");
//	else
//		printf("������\n");
//
//	return 0;
//}


//ѭ�����

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("д����:%d\n",line);
//			line++;
//	}
//	if (line == 30000)
//	{
//		printf("�ҵ�����\n");
//	}
//
//	return 0;
//}


//����
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//int sum = num1 + num2;
//	//�����ķ�ʽ���
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}

////���� - һ����ͬ���͵�Ԫ�صļ���
////10������1-10������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a','b','c' };//����ȫ��ʼ��������Ĭ��Ϊ0
//
//	return 0;
//}

//������
//��λ������

//int main()
//{
//	int a = 2;
//	int b = a << 1;
//
//	printf("%d\n", b);
//
//	return 0;
//}

//��Ŀ������
//�� - �߼�������
//int main()
//{
//	int a = 0;
//
//
//	printf("%d\n", !a);//1
//
//	if (a) 
//	{
//		//���aΪ�棬����
//
//	}
//	if (!a)
//	{
//		//���aΪ�٣�����
//
//
//	}
//	return 0;
//}

//int main()
//{
//	//sizeof��һ��������
//	//���Ǻ���
//	//�������ͻ��߱����Ĵ�С
//	int a = 0;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof (a));
//
//
//	return 0;
//}

//int main()
//{
//	//10*4=40
//	//���Ǻ���
//	//�������ͻ��߱����Ĵ�С
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//�������������ܴ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));//4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	return 0;
//}

int main()
{
	int a, b, MAX;
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		MAX = a;
	}
	else
	{
		MAX = b;
	}
	printf("%d", MAX);

	return 0;
}