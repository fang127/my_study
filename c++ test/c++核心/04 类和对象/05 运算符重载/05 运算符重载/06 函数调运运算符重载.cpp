#include<iostream>
using namespace std;

//函数调用运算符重载

//打印输出类
class MyPrint
{
public:

	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myprint;
	myprint("Hello World");//重载打印 因为与函数调用很像，因此称为仿函数
	MyPrint02("Hello World");//函数调用
}

//仿函数很灵活，因此没有固定的写法

class Myadd
{
public:
	int operator()(int num1,int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	Myadd add;
	int ret = add(1, 2);

	cout << ret << endl;

	//匿名函数对象 被执行完了立即释放 如Myadd()
	cout << Myadd()(100, 100) << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");

	return 0;
}