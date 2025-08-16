#include <iostream>
using namespace std;

int main1()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //c++规定两个整数相除结果仍为整数，将小数部分去除；

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl;

// 	int a3 = 10;
// 	int b3 = 0;
// 	cout << a3 / b3 << endl; //除数不可为0

	//两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;

	double d3 = 0.5;
	double d4 = 0.23;
	cout << d3 / d4 << endl; //运算结果也可以是小数

	system("pause");

	return 0;
}