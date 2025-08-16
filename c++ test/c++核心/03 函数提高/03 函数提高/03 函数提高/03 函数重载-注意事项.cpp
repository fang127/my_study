/*#include <iostream>
using namespace std;

//函数重载的注意事项
//1、引用作为重载的条件
void func(int &a)
{
	cout << "func(int &a)调用" << endl;
}

void func(const int &a)//const int和int类型不同，可以重载
{
	cout << "func(const int &a)调用" << endl;
}

//2、函数重载碰到默认参数
void func2(int a,int b = 10)
{
	cout << "func2(int a,int b = 10)的调用" << endl;
}

void func2(int a)
{
	cout << "func2(int a)的调用" << endl;
}

int main()
{
	int a = 10;//a为变量，可读可写
	func(a);//所以走的是func（int &a）
	func(10);//如果传给fun（int &a）,则为：int &a = 10;不合法，引用必须初始化；如果是func(const int &a)，则const int &a = 10,合法，系统给了个temp临时空间作为10，然后引用该temp，只是我们不知道temp具体名称
	//func2(10);//当函数重载碰到默认参数，出现二义性，不可重载
	func2(10,20);

	system("pause");

	return 0;
}
*/