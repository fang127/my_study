#include "函数.h"

void hanshu(int* arr,int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];//这里没有解引用，是因为arr在这里是一个指针，arr[i]=*(arr+i)，即指针向后移动i个地址单位，配上*就是向后i个地址的内容
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
}

void print(int* arr,int len)
{
	cout << "排序好的arr数组为：";
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}