#include <iostream>
using namespace std;

int main14()
{
	//外层执行一次，内层执行一周
	//外层循环
	for (int a = 1; a <= 10; a++)
	{
		//内层循环
		for (int b = 1; b <= 10; b++)
		{
			cout << "* " ;
		}
		cout << endl;
	}

	system("pause");

	return 0;
}