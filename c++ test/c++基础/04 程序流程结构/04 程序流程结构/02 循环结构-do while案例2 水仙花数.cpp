#include <iostream>
using namespace std;

int main11()
{
	//案例描述：水仙花数是指一个三位数，它的每个位上的数字的3次幂之和等于它本身
	//例如：1^3+5^3+3^3=153
	//请利用do...while语句，求出所有3位数中的水仙花数
	int a = 0;
	int b = 0;
	int c = 0;
	int num = 100;
	//num = a * 100 + b * 10 + c * 1;

// 	a = num % 10;
// 	b = (num / 10) % 10;
// 	c = num / 100;
// 
// 	cout << a << b << c << endl;
	//1、打印所有三位数
	do 
	{
		//2、如果是水仙花数则打印
		a = num % 10;
		b = (num / 10) % 10;
		c = num / 100;
		if (a * a * a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}
		num++;
	} 
	while (num < 1000);

	system("pause");

	return 0;
}