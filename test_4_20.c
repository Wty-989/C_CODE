#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//9
//	//����
//	print_table(n);
//	//�����������ܹؼ�
//	return 0;
//}


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba

//�ǵݹ�
//
//my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//
//
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//�ݹ鷽ʽ
my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char* str)
{
	char tmp = *str;
	int len = my_strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	//�ж�����
	if(my_strlen(str+1)>=2)
	{
		reverse_string(str + 1);
	}
	*(str + len - 1) = tmp;
	
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ

	printf("%s\n", arr);//fedcba
	return 0;
}









//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//
//
//	printf("%d\n", sum);
//	return 0;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//
//	int ret = Pow(n,k);
//	printf("%lf\n", ret);
//		return 0;
//}

//����
//int main()
//{
//	//int arr[8];
//	//char ch[5];
//	int a = 10;//��ʼ��
//
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
//	int arr2[10] = {1,2,3 };//����ȫ��ʼ��
//	int arr3[] = { 1,2,3,4,5 };//[5]
//
//	char ch1[5] = { 'w','t','y' };
//	char ch2[] = { 'w','t','y' };
//
//	char ch3[5] = "wty";//w t y \0 0
//	char ch4[] = "wty";//w t y \0
//
//	char ch5[] = "wty";
//	//[w t y \0]
//	char ch6[] = { 'w','t','y' };
//	//[w t y]
//
//	printf("%s\n", ch5);
//	printf("%s\n", ch6);
//
//	printf("%d\n", strlen(ch5));//3
//	printf("%d\n", strlen(ch6));//���ֵ
//
//	return 0;
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	
//		printf("&arr[%d] = %p\n",i, &arr[i]); //%p - �ǰ���ַ��ӡ - ʮ�����ƵĴ�ӡ
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int *p = arr;//��������������Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	
//		printf("%d ",*p); //%p - �ǰ���ַ��ӡ - ʮ�����ƵĴ�ӡ
//	}
//	return 0;
//}


//����쳲�������

//long long Fac(int N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fac(N - 1) + Fac(N - 2);
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n", Fac(i));
//	return 0;
//}