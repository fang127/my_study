#include <iostream>
using namespace std;

//函数的常见样式
//1、无参无反
void test01()
{
	cout << "this is test01" << endl;
}

//2、有参无反
void test02(int a)
{
	cout << "this is test02 a = " << a << endl;
}

//3、无参有反
int test03()
{
	cout << "this is test03" << endl;
	return 1000;
}

//4、有参有反
int test04(int a)
{
	cout << "this is test04 a = " << a << endl;
	return 1000;
}

int main4()
{
	//无参无反函数调用
	test01();

	//有参无反函数调用
	test02(100);

	//无参有反函数调用
	int num1 = test03();
	cout << "num1 = " << num1 << endl;

	//有参有反函数调用
	int num2 = test04(10000);
	cout << "num2 = " << num2 << endl;

	system("pause");

	return 0;
}