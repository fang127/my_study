#include <iostream>
using namespace std;

int main4()
{
	//案例描述：请声明一个5个元素的数组，并且将元素逆置
	
	//1、创建数组
	int arr[] = { 1,35,54,645,2 };
	cout << "数组逆置前为：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	//2、实现逆置
	int start = 0; //记录起始下标位置
	int end = sizeof(arr) / sizeof(arr[0]) - 1; //记录结束下标位置

	while (start < end)
	{
		int temp = arr[start]; //定义临时空间储存第一个数组元素，避免被最后一个元素覆盖找不到了
		arr[start] = arr[end]; //起始下标与结束下标的元素互换
		arr[end] = temp; //利用临时空间储存第一个数组元素，避免被最后一个元素覆盖找不到了
		start++;//起始位置+1，结束位置-1
		end--;
	}

	//3、打印逆置后的数组
	cout << "数组元素逆置后为：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	
	system("pause");

	return 0;
}