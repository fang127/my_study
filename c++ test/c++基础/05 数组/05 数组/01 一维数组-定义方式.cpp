#include <iostream>
using namespace std;

int main1()
{
	//数组定义方式三种1
	//1、数据类型 数组名[数组长度]
	int arr[5];
	
	//给数组中的元素进行赋值
	//数组元素中的下标是从0开始标记的
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	
	//访问数据元素
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;

	//2、数据类型 数组名[数组长度] = {值1，值2，值3...}
	//如果在初始化数组时，没有填写完全部内存，会用0填补剩余空间
	int arr2[6] = { 10, 20, 30, 40, 50 };

	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[2] << endl;
	cout << arr2[3] << endl;
	cout << arr2[4] << endl;
	//这样单独输出太麻烦，可以利用循环输出
	for (int i = 0; i < 6; i++)
	{
		cout << arr2[i] << endl;
	}

	//3、数据类型 数组名[ ] = {值1，值2，值3...}
	//定义数组的时候，必须有初始长度,标出后面元素，系统会自动匹配长度
	int arr3[] = { 10,20,30,40,50,60,70,80,90 };
	for (int j = 0; j < 9; j++)
	{
		cout << arr3[j] << endl;
	}



	system("pause");

	return 0;
}