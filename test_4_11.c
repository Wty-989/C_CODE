#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N):>")
//
//
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main() 
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		//if (i == 5)
//		//	break;
//		//if (i == 5)
//		//	continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	//�жϲ���ʡ�Ի������ѭ��
//	for (;;)
//	{
//	
//		printf("hehe\n ");
//	}
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n ");
//		}
//		
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	do {
//		printf("%d ", i);
//		i++;
//
//	} while (i <= 10);
//
//	return 0;
//
//}

//����n!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//
//}


//����1��+2��+��+10��
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum1 = 1;
//	int sum2 = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		sum1 *= i;
//		sum2 += sum1;
//	}
//	printf("%d\n", sum2);
//
//	return 0;
//}

//��һ�����������в��Ҿ����ĳ������n

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr�������������в���k(7)��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ���
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//	    int mid = (left + right) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ� ���м��ƶ�
//welcom to HNU!!!!!!
//###################

//w#################!
//we###############!!
//...
//welcom to HNU!!!!!!

//#include <Windows.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "welcom to HNU!!!!!!";
//	char arr2[] = "###################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left<=right)
//	{ 
//         arr2[left] = arr1[left];
//	     arr2[right] = arr1[right];
//
//	     printf("%s\n", arr2);
//
//	     Sleep(1000);//˯��
//	     system("cls");//����
//
//	     left++;
//	     right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//�����ַ����Ƚϣ�������==��Ӧ����strcmp ���Ƚϵ���ASCII��ֵ��
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//
//	return 0;
//}

//дһ����������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
//    a.�¶��ˣ��͹�ϲ�㣬��Ϸ����
//    b.��´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
//3.��Ϸһֱ�棬�����˳���Ϸ


void menu()
{
	printf("********************************\n");
	printf("********** 1. play *************\n");
	printf("********** 0. exit *************\n");
	printf("********************************\n");
}

void game()
{
	//��������Ϸ��ʵ��
	//1.���������
	//rand����������һ��0-32767֮�������
	//ʱ�� - ʱ���

	int ret = rand() % 100 + 1;//%100��������0-99��Ȼ��+1����Χ����1-100
	//printf("%d\n",ret);

	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");

		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}

	}


}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;


		}
	} while (input);


		return 0;
}