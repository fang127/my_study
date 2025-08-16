#include <iostream>
using namespace std;

int main4()
{
	//野指针
	//在程序中，尽量避免出现野指针
	int* p = (int*)0x1100;

	//cout << *p << endl;访问报错，因为只给指针定义了内存空间，但并未申请那块内存空间的使用权限

	system("pause");

	return 0;
}