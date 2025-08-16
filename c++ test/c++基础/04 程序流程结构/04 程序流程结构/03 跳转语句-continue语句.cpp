#include<iostream>
using namespace std;

int main17()
{
	//输出0-100中的奇数
	for (int i = 0; i <= 100; i++)
	{
		//如果是奇数输出，偶数不输出
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}

	system("pause");

	return 0;
}