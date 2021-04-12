#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>")
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
//	//判断部分省略会造成死循环
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

//计算n!
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


//计算1！+2！+…+10！
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

//在一个有序数组中查找具体的某个数字n

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序的数组中查找k(7)的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素的个数
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
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}

//编写代码，演示多个字符从两端移动 向中间移动
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
//	     Sleep(1000);//睡眠
//	     system("cls");//清屏
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
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//两个字符串比较，不能用==，应该用strcmp （比较的是ASCII码值）
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//
//	return 0;
//}

//写一个猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
//    a.猜对了，就恭喜你，游戏结束
//    b.你猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
//3.游戏一直玩，除非退出游戏


void menu()
{
	printf("********************************\n");
	printf("********** 1. play *************\n");
	printf("********** 0. exit *************\n");
	printf("********************************\n");
}

void game()
{
	//猜数字游戏的实现
	//1.生成随机数
	//rand函数返回了一个0-32767之间的数字
	//时间 - 时间戳

	int ret = rand() % 100 + 1;//%100的余数是0-99，然后+1，范围就是1-100
	//printf("%d\n",ret);

	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");

		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
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
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;


		}
	} while (input);


		return 0;
}