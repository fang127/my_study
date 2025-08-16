#include "swap.h" //引号表示优先访问本地资源

//函数的的定义
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}