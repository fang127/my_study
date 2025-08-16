// #include<iostream>
// using namespace std;
// 
// //继承同名静态成员处理
// class Base
// {
// public:
// 
// 	static int m_A;
// 
// 	static void func()
// 	{
// 		cout << "Base下的静态成员函数调用" << endl;
// 	}
// 
// 	static void func(int a)
// 	{
// 		cout << "Base(int a)下的静态成员函数调用" << endl;
// 	}
// };
// int Base::m_A = 100;
// 
// class Son : public Base
// {
// public:
// 	static int m_A;
// 
// 	static void func()
// 	{
// 		cout << "Son下的静态成员函数调用" << endl;
// 	}
// };
// int Son::m_A = 200;
// 
// void test01()
// {
// 	//1、通过对象访问
// 	Son s;
// 	cout << "Son下的m_A = " << s.m_A << endl;
// 	cout << "Base下的m_A = " << s.Base::m_A << endl;
// 	//2、通过类名访问
// 	cout << "通过类名访问：" << Son::m_A << endl;
// 	cout << "通过类名访问：" << Base::m_A << endl;
// 	//第一个::代表通过类名方式访问 第二个::代表访问父类作用域下
// 	cout << "通过类名访问：" << Son::Base::m_A << endl;
// }
// 
// //同名静态函数
// void test02()
// {
// 	//1、通过对象访问
// 	Son s;
// 	s.func();
// 	s.Base::func();
// 
// 	//2、通过类名访问
// 	Son::func();
// 	Son::Base::func();
// 	//子类出现和父类同名的静态成员函数，也会隐藏父类中所有同名成员函数
// 	//如果要访问父类中被隐藏的成员函数，需要加作用域
// 	Son::Base::func(100);
// }
// 
// int main()
// {
// 	//test01();
// 	test02();
// 
// 	system("pause");
// 
// 	return 0;
// }