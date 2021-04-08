#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	//~按二进制位取反
//	//把所有的二进制位中的数字，1变0，0变1 
//	//整数a=0
//	//二进制：
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111  ~a
//	//整数在内存中存储的是补码
//	//一个整数的二进制表示有三种：原码、反码、补码
//	//-1：（负数的计算）
//	//10000000000000000000000000000001（原码）
//	//11111111111111111111111111111110（反码）
//	//11111111111111111111111111111111（补码）
//	//正整数：原码、反码、补码相同
//
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//int b = ++a;//前置++ 先++，后使用
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//
//
//	int b = a++;//后置++ 先使用，后++
//	printf("%d\n", b);//10
//	printf("%d\n", a);//11
//
//	return 0;
//}


//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d\n", a);
//	
//	return 0;
//}

//条件操作符（三目操作符）
//exp1成立，exp2计算，整个表达式的结果是：exp2的结果
//exp1不成立，exp3计算，整个表达式的结果是：exp3的结果

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


//逗号表达式
//int main()
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	       //a=5        c=1        b=3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式，是从左到右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//
//	printf("%d\n", d);
//
//	return 0;
//}


//下标引言操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//[]下标引言操作符
//
//	return 0;
//}

//函数调用操作符
//int main()
//{
//	//调用函数的时候，函数名后面的（）就是函数调用的操作符
//	printf("hehe\n");//[]下标引言操作符
//
//	return 0;
//}

//typedef unsigned int u_int;//类型重命名
//
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//	return 0;
//}

//static -静态的
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//void test()
//{
//	static int a = 1;//a是局部变量
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


//extern 声明外部符号
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//
//
//	return 0;
//}

//声明函数
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

//define是个预处理指令

//1.define定义符号
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//
//	return 0;
//}

//2.define定义宏
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", 4*ADD(2,3));
//
//	return 0;
//}


//int main()
//{
//	int a = 10;//a在内存中要分配空间的 - 4个字节
//	printf("%p\n",&a);//%p专门用来打印地址
//	int* pa = &a;//pa是用来存放地址的，在c语言中pa叫是指针变量
//	//* 说明pa是指针变量
//	//int说明pa执行的对象是int型
//
//	char ch = 'w';
//	char* pc = &ch;
//
//
//	return 0;
//}

//指针 就是 地址
//int main()
//{
//	int a = 10;
//	
//	int* pa = &a;
//
//	*pa = 20;//* 解引用操作 *pa就是通过pa里的地址，找到a
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
//	//指针的大小是相同的
//	//指针用来存放地址
//	//指针需要多大空间，取决于地震的存储需要多大空间
//
//	return 0;
//}


//结构体可以让c语言创建新的类型出来
//创建一个学生

struct Stu
{
	char name[20];//成员变量
	int age;
	double score;
};
//创建一个书的类型

struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "张三",20,85.5 };//结构体的创建和初始化
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
	struct Stu *ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);//结构体指针->成员变量名
	
	return 0;

}