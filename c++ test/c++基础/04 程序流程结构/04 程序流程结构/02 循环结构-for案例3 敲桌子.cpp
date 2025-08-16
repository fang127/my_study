#include <iostream>
using namespace std;

int main13()
{
	//案例描述：从1开始数到数字100，如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出
	//1、打印数字1-100
	//2、找到数字的个位和十位数字
	//3、判断是否敲桌子
	for (int num = 1; num <= 100; num++)
	{
		int a = num % 10; //个位
		int b = num / 10; //十位
		int c = 0;
		c = num % 7;
		if (a == 7 || b == 7 || c == 0)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}

	system("pause");

	return 0;
}