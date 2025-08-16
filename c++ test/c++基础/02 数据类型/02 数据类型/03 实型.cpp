#include <iostream>
using namespace std;

int main3()
{
	//1、单精度 float 4字节 7位有效数字
	//2、双精度 double 8字节 15~16位有效数字
	//默认情况下，输出一个小数，会显示出6位有效数字
	float f1 = 3.1415926f;//要在数值后面加f，否则系统默认为双精度，然后转换为单精度float使用，加上f系统识别为单精度，不需要转换

	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;

	cout << "d1 = " << d1 << endl;

	//统计float和double占用内存空间
	cout << "float占用的内存空间为：" << sizeof(float) << endl;
	cout << "double占用的内存空间为：" << sizeof(double) << endl;

	//科学计数法
	float f2 = 3e2; //3*10^2;
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; //3*0.1^2;
	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;
}