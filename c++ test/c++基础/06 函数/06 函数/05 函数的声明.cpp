#include <iostream>
using namespace std;

//函数定义写在main后面，无法运行，因为顺序结构
//但是通过函数的声明，可以提前告诉编译器函数的存在，但是vs新点的版本可以不用声明也可以调用，例如vs2022
int max(int a, int b); //函数的声明
//函数的声明可以写多次，但定义只能有一次
// int max(int a, int b);
// int max(int a, int b);
// int max(int a, int b);

int main5()
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

//比较函数，实现两个整型数字进行比较，返回较大的值

int max(int a, int b)
{
	return a > b ? a : b;
	// 	if (a > b)
	// 	{
	// 		cout << "大的数为a = " << a << endl;
	// 	}
	// 	else if (a == b)
	// 	{
	// 		cout << "a和b一样大a = b =" << a << endl;
	// 	}
	// 	else
	// 	{
	// 		cout << "大的数为b = " << b << endl;
	// 	}
}