#define _CRT_SECURE_NO_WARNINGS 1

//全局变量：在整个工程中都可以使用,但被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了
//static int g_val = 2022;

//修饰函数，同全局变量。使函数只能在本源文件里使用
//本质上：static是将函数的外部链接属性变成了内部链接属性

static int Add(int x, int y)
{
	return x + y;

}