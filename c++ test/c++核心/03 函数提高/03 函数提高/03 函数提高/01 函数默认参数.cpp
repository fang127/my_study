/*#include <iostream>
using namespace std;

//函数默认参数
int func(int a, int b,int c)
{
	return a + b + c;
}

int func02(int a = 20, int b = 20, int c = 30)
{
	return a + b + c;
}

//注意事项
//如果某个位置已经有了默认参数，那么从这个位置往后，从左向右都必须要有默认值
//int func03(int a, int b = 10, int c)
//{
	//return a + b + c;
//}

//2、如果函数声明有默认参数，函数实现就不能有默认参数
//*声明和实现只能有一个默认参数
int func03(int a = 10, int b = 10);//函数声明

int func03(int a = 10, int b = 10)//错误，重新定义了默认参数，不可以
{
	return a + b;
}


int main()
{
	cout << func(10, 20, 30) << endl;
	
	cout << func02() << endl;//如果函数有默认值，可以不输入实参，函数使用默认值

	cout << func02(30) << endl;//如果自己传入数据，就用自己的实参数据，
	cout << func02(20, 30) << endl;

	//cout << func03(10, 10) << endl;

	system("pause");

	return 0;
}
*/