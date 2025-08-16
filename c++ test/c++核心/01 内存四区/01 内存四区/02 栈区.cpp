/*#include <iostream>
using namespace std;

//栈区数据注意事项
//栈区数据由编译器分配和释放
//不要返回局部变量的地址

int* func(int b)//形参数据也会放在栈区
{
	b = 100;
	int a = 10;//局部变量 存放在栈区，栈区数据在函数执行完后自动释放
	return &a;//返回局部变量的地址
}

int main()
{
	//接受func函数的返回值
	int* p = func(1);

	cout << *p << endl;//第一次可以打印正确的数据，是编译器进行了保留
	cout << *p << endl;//第二次这个数据就不会保留 备注：32位

	system("pause");

	return 0;
}*/