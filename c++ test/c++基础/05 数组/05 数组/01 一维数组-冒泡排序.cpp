#include <iostream>
using namespace std;

int main5()
{
	//冒泡排序
	int arr[] = { 4,2,8,0,5,7,1,3,9 };

	cout << "排序前的结果为：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
  	cout << endl;

	//开始冒泡排序
	for (int i = 0; i < 9 - 1; i++) //排序总轮数为 元素个数-1
	{
		//内层循环对比
		for (int j = 0; j < 9 - i - 1; j++) //内层循环次数=元素个数-当前轮次-1
		{
			//如果第一个元素比第二个大，交换他们
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "排序后的结果为：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");

	return 0;
}