// #include<iostream>
// using namespace std;
// 
// //继承中同名成员处理
// class Base
// {
// public:
// 	Base()
// 	{
// 		m_A = 100;
// 	}
// 
// 	void func()
// 	{
// 		cout << "Base下的func()调用" << endl;
// 	}
// 
// 	void func(int a)
// 	{
// 		cout << "Base下的func(int a)调用" << endl;
// 	}
// 
// 	int m_A;
// };
// 
// class Son : public Base
// {
// public:
// 	Son()
// 	{
// 		m_A = 200;
// 	}
// 
// 	void func()
// 	{
// 		cout << "Son下的func()调用" << endl;
// 	}
// 
// 	int m_A;
// };
// 
// //同名成员处理
// void test01()
// {
// 	Son s;
// 	cout << "Son下m_A = " << s.m_A << endl;//直接调用是子类中的同名成员
// 	//如果通过子类对象 访问父类下的同名成员，需要加作用域
// 	cout << "Base下m_A = " << s.Base::m_A << endl;
// }
// 
// //同名函数处理
// void test02()
// {
// 	Son s;
// 	s.func();//直接调用是子类中的同名成员
// 	s.Base::func();//调用父类要加父类作用域
// 	
// 	//如果子类中出现了和父类同名的成员函数，子类同名成员会隐藏掉父类中所有同名的成员函数
// 	//s.func(100);
// 	//如果想访问到父类中被隐藏的同名成员函数 要加作用域
// 	s.Base::func(100);
// }
// 
// int main()
// {
// 	test01();
// 	test02();
// 
// 	system("pause");
// 
// 	return 0;
// }