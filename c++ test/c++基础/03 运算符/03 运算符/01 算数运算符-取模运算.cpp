#include <iostream>
using namespace std;

int main2()
{
	int a1 = 10;
	int b1 = 3;
	cout << a1 % b1 << endl;

	int a2 = 10;
	int b2 = 20;
	cout << a2 % b2 << endl;

	//int a3 = 10;
	//int b3 = 0;
	//cout << a3 % b3 << endl; //取模运算基于除法，除数不能为0

	//两个小数不能做取模运算的
	/*double d1 = 3.14;
	double d2 = 1.1;
	cout << d1 % d2 << endl;*/

	//只有整型变量可以做取模运算

	system("pause");

	return 0;
}