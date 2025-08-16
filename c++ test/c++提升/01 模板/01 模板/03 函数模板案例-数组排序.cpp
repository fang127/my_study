//#include<iostream>
//using namespace std;
//
////案例描述：
//// 利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
//// 排序规则从大到小，排序算法为选择排序
//// 分别利用char数组和int数组进行测试
//
//template<typename T>
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T>
//void mySort(T arr[],int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int index = i;
//		for (int j = i + 1; j < len; j ++ )
//		{
//			if (arr[index] < arr[j])
//			{
//				index = j;
//			}
//		}
//		if (index != i)
//		{
//			//交换代码
//			/*T temp = arr[i];
//			arr[i] = arr[index];
//			arr[index] = temp;*/
//			myswap(arr[index], arr[i]);
//		}
//	}
//}
//
//template<typename T>
//void show_Array(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//测试char数组
//	char charArr[] = "acfebd";
//	int len = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr, len);
//	show_Array(charArr, len);
//}
//
//void test02()
//{
//	//测试int数组
//	int intArr[] = { 1,3,5,2,7,4,9,8 };
//	int len = sizeof(intArr) / sizeof(intArr[0]);
//	mySort(intArr, len);
//	show_Array(intArr, len);
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}