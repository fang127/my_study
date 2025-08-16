#include <iostream>
using namespace std;

int main()
{

	//整型
	//1、短整型 (-2e15~2e15-1)
	short num1 = 10;

	//2、整型 (-2e31~2e31-1)
	int num2 = 10;

	//3、长整型 (-2e31~2e31-1)
	long num3 = 10;

	//4、长长整型 (-2e63~2e63-1)
	long long num4 = 10;

	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	system("pause");

	return 0;
}