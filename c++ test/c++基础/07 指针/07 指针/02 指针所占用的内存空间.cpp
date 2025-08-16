#include <iostream>
using namespace std;

int main2()
{
	//指针所占的内存空间大小
	int a = 10;
	int* p = &a;

	//32为操作系统下，即x86，指针占4字节空间大小，不管什么数据类型，因为它保存的是内存地址
	//64为操作系统下，即x64，指针占8字节空间大小，不管什么数据类型，因为它保存的是内存地址
	cout << "sizeof(int *) = " << sizeof(int*) << endl;
	cout << "sizeof(float *) = " << sizeof(float*) << endl;
	cout << "sizeof(double *) = " << sizeof(double*) << endl;
	cout << "sizeof(char *) = " << sizeof(char*) << endl;
	cout << "sizeof(string *) = " << sizeof(string*) << endl;
	cout << "指针p占用的内存空间大小为：" << sizeof(p) << endl;

	system("pause");

	return 0;
}