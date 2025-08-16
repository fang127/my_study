#include <iostream>
using namespace std;

int main10()
{
	//do...while语句
	//在屏幕中输出0-9十个数字

	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} 
	while (num < 10);

	//do...while和while的区别在do...while会先执行一次循环语句

	system("pause");

	return 0;
}