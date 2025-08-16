#include <iostream>
using namespace std;

int main3()
{
	//案例描述：在一个数组中记录了五只小猪的体重，如int arr[5] = {300，350，200，400，250}；找到并打印最重的小猪体重
	//更新最大值的方法
	int arr[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "最重的小猪体重是：" << max << endl;

	system("pause");

	return 0;
}