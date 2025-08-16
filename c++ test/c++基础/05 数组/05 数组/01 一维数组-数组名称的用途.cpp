#include <iostream>
using namespace std;

int main2()
{
	//数组名称的用途
	//1、统计整个数组占用内存的大小
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	cout << "整个数组占用的内存空间为：" << sizeof(arr) << endl;
	cout << "统计每个元素所占用内存空间为：" << sizeof(arr[0]) << endl;
	cout << "数组中元素的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2、可以查看数组首地址
	cout << "数组的首地址为：" << arr << endl; //输出为首地址，为16进制
	cout << "数组的首地址为：" << (long long)arr << endl;//输出为首地址，强制将16进制转为10进制
	cout << "数组中第一个元素地址为：" << (long long)&arr[0] << endl;
	cout << "数组中第二个元素地址为：" << (long long)&arr[1] << endl;//第二个和第一个元素位置紧挨着，差4字节

	//数组名是常量，不可以进行赋值操作
	//arr = 100

	system("pause");

	return 0;
}