//#include<iostream>
//using namespace std;
//
////普通函数和函数模板区别
////1、普通函数调用可以发生隐式类型转换
////2、函数模板 自动类型推导不可以发生隐式类型转换  显示指定类型可以发生隐式类型转换
//
////普通函数
//int myAdd01(int a,int b)
//{
//	return a + b;
//}
//
////函数模板
//template<typename T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';//c的ASCII为99
//	cout << myAdd01(a, c) << endl;//普通函数发生了隐式类型转换，10 + 99
//
//	//自动类型推导调用
//	cout << myAdd02(a, b) << endl;
//	//cout << myAdd02(a, c) << endl;//无法自动类型推导，不知道是转为int还是char
//
//	//显示指定类型
//	cout << myAdd02<int>(a, c) << endl;
//	cout << myAdd02<char>(a, c) << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}