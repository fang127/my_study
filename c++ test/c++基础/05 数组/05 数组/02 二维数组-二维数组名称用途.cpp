#include <iostream>
using namespace std;

int main7()
{
	//二维数组名称用途

	//1、查看占用内存空间大小
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组占用内存空间大小为：" << sizeof(arr) << endl;
	cout << "二维数组第一行占用内存空间大小为：" << sizeof(arr[0]) << endl;
	cout << "二维数组第二行占用内存空间大小为：" << sizeof(arr[1]) << endl;
	cout << "二维数组第一个元素占用内存空间大小为：" << sizeof(arr[0][0]) << endl;
	cout << "二维数组行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2、查看二维数组首地址
	cout << "二维数组首地址为：" << arr << endl;
	cout << "二维数组首地址为：" << (long long)arr << endl; //强制将16进制转为10进制
	cout << "二维数组第一行首地址为：" << (long long)arr[0] << endl; //强制将16进制转为10进制
	cout << "二维数组第二行首地址为：" << (long long)arr[1] << endl; //强制将16进制转为10进制
	cout << "二维数组（1，1）首地址为：" << (long long)&arr[0][0] << endl; //强制将16进制转为10进制，具体元素要加&
	cout << "二维数组（1，2）首地址为：" << (long long)&arr[0][1] << endl; //强制将16进制转为10进制
	cout << "二维数组（2，1）首地址为：" << (long long)&arr[1][0] << endl; //强制将16进制转为10进制

	system("pause");

	return 0;
}