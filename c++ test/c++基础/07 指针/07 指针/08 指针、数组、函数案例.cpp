#include <iostream>
using namespace std;
#include"函数.h"

int main()
{
	//案例描述：封装一个函数，利用冒泡排序，实现整型数组的升序排序
	//1、创建数组
	int arr[10] = {4,3,6,9,1,2,10,8,7,5};
	int len = sizeof(arr) / sizeof(arr[0]);//不可以在函数内求，因为传入为arr，数组退化为指针（数组首地址），没有办法得到数组长度，必须通过主程序传数组长度

	//2、创建函数，实现冒泡排序
	hanshu(arr,len);

	//3、打印排序好的数组
	print(arr,len);

	system("pause");

	return 0;
}