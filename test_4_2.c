#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//作用域和生命周期
//局部变量作用域：就是变量所在的局部范围
//全局变量作用域：整个工程
//变量的生命周期：变量的创建和销毁的时间段


//int g_val = 2021; //全局变量
//跨文件的全局变量使用前需要声明一下

//extern int g_val;
//
//int main()
//{
//	printf("1： %d\n", g_val);
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//		printf("2： %d\n", g_val);
//	}
//
//	printf("3： %d\n", g_val);
//
//	return 0;
//
//}

//常量

//#define MAX 10000
//
//int main()
//{
//	//1.字面常量
//	//3.14;
//	//10;
//	//"abcd"
//
//
//	//2.const修饰的常变量
//	//const int num = 10;//num就是变量 - 具有常属性（不能被改变属性）
//	//num = 20;
//	//printf("num = %d\n", num);//20
//
//	//int arr[10] = { 0 };//10个元素
//	//int n = 10;
//	//int arr2[n] = { 0 };//n是变量的，这里不行
//
//	//3.#define定义的标识符常量
//	//int n = MAX;
//	//printf("n = %d\n", n);
//
//	
//
//	return 0;
//}

//性别
//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	MALE = 3,//赋初值
//	FEMALE,
//	SECRET
//
//};
//
//int main()
//{
//	//4.枚举常量
//	//可以一一列举的常量
//
//	enum Sex s = MALE;
//	//MALE = 3,//error
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}


//字符串就是一串字符 - 用双引号括起来的一串字符

//int main()
//
//{
//	//字符数组 - 数组是一组相同类型的元素
//	//字符串结尾隐藏了\0
//	//\0是字符串结束的标志
//	//char arr[] = "hello";
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//
//	//求一下字符串的长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//打印字符串
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//
//
//	return 0;
//}



//选择语句

//int main()
//{
//	int input = 0;//输入的值
//	printf("天天去实验室:>\n");
//	printf("那要好好学习吗(1/0)?>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("获得一等奖学金\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}


//循环语句

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码:%d\n",line);
//			line++;
//	}
//	if (line == 30000)
//	{
//		printf("找到工作\n");
//	}
//
//	return 0;
//}


//函数
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
//	//函数的方式解决
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}

////数组 - 一组相同类型的元素的集合
////10个整形1-10存起来
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a','b','c' };//不完全初始化，其余默认为0
//
//	return 0;
//}

//操作符
//移位操作符

//int main()
//{
//	int a = 2;
//	int b = a << 1;
//
//	printf("%d\n", b);
//
//	return 0;
//}

//单目操作符
//！ - 逻辑反操作
//int main()
//{
//	int a = 0;
//
//
//	printf("%d\n", !a);//1
//
//	if (a) 
//	{
//		//如果a为真，做事
//
//	}
//	if (!a)
//	{
//		//如果a为假，做事
//
//
//	}
//	return 0;
//}

//int main()
//{
//	//sizeof是一个操作符
//	//不是函数
//	//计算类型或者变量的大小
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
//	//不是函数
//	//计算类型或者变量的大小
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
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