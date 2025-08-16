//#include<iostream>
//using namespace std;
//
////函数模板注意事项
//template<typename T>//typename可以替换为class
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1、自动类型推导，必须推导出一致的数据类型T，才可以使用
//void test01()
//{
//	int a = 10, b = 20;
//	char c = 'c';
//	//myswap(a, b);
//	//myswao(a, c);//错误，不能推导出一致的T类型
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
////2、模板必须要确定出T的数据类型，才可以使用
//template<class T>//typename可以替换为class
//void func()
//{
//	cout << "func的调用" << endl;
//}
//
//void test02()
//{
//	//func();//没有传入实参，编译器无法推导T数据类型，只能修改下面：
//	func<int>();
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}