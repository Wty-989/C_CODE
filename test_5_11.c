#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//这里p就是一个野指针
//	//1.指针未初始化
//	//int* p; //p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	//*p = 20;//非法访问内存了
//
//	//2.越界访问
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 10; i++) //i<=10 超出范围了 越界了
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//
//	//3.指针指向的空间释放
//	return 0;
//}


//int main()
//{
//	//当不知道p应该初始化什么地址的时候，直接初始化为NULL
//	//int* p = NULL;
//	////明确知道初始化的值
//	//int a = 10;
//	//int*ptr = &a;
//
//	//c语言本身不会检查数组的越界行为的
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
//	printf("%d\n", &arr[9] - &arr[0]); // 9 指针 - 指针（前提：两个指针指向同一块空间） 得到的是两个指针之间的元素个数
//
//	return 0;
//}
#include<string.h>
//int main()
//{
//	//strlen() - 求字符串长度
//	int len = strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//my_strlen三种实现
//1.计数器
//2.递归
//3.指针-指针
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
//	//strlen() - 求字符串长度
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
//	int* p = arr;//数组名
//	printf("%d\n",2[arr]); //p[2]也可以
//	printf("%d\n", arr[2]);
//
//	//arr[2] <==> * (arr+2) <==> * (p+2) <==>* (2+p) <==> * (2+arr) <==> 2[arr]
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//
//	//ppa就是一个二级指针变量
//	int* *ppa = &pa;//pa也是个变量，&pa取出pa在内存中起始地址
//	int* **pppa = &ppa; //三级指针
//
//	return 0;
//}

//int main()
//{
//	int arr[10];//整型数组 -存放整形的数组就是整形数组
//	char ch[5];//字符数组 - 存放的字符
//	//指针数组 -  存放指针的数组
//	int* parr[5];//整形指针的数组
//	char* pch[5]; //字符指针数组
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
//	//成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];//学号
//}s1,s2;//s1和s2也是结构体变量
////s1,s2是全局变量
//
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'w',20,3.14}, "wty",20,"20081000210036" };//对象
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
	//成员变量
	struct B sb;
	char name[20];//名字
	int age;//年龄
	char id[20];//学号
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
	//s是局部变量
	struct Stu s = { {'w',20,3.14}, "wty",18,"20081000210036" };//对象
    //写一个函数打印s的内容
	print1(s); //传值调用
	print2(&s);//传址调用

	return 0;
}