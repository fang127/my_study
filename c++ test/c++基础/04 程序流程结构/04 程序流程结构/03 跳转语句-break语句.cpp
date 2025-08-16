#include <iostream>
using namespace std;

int main16()
{
	//break使用时机

	//1、出现在switch语句中
	cout << "请选择副本难度" << endl;
	cout << "1、普通" << endl;
	cout << "2、中等" << endl;
	cout << "3、困难" << endl;

	int select = 0;
	cin >> select;

	switch (select)
	{
	case 1:
		cout << "您选择的难度为：普通" << endl;
		break;
	case 2:
		cout << "您选择的难度为：中等" << endl;
		break;
	case 3:
		cout << "您选择的难度为：困难" << endl;
		break;
	default:
		break;
	}

	//2、出现在循环语句中
	for (int i = 0; i < 10; i++)
	{
		//如果i等于5，退出循环，不再打印
		if (i == 5)
		{
			break; //退出循环
		}
		cout << i << endl;
	}

	//3、出现在嵌套循环语句中 如果b等于5，退出循环，不再打印
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (b == 5)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}