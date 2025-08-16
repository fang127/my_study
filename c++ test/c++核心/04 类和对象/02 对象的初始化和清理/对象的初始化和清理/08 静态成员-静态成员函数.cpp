// #include<iostream>
// using namespace std;
// 
// //静态成员函数
// //所有对象共享同一个函数
// //静态成员函数只能访问静态成员变量
// 
// class Person
// {
// public:
// 	//静态成员函数
// 	static void func()
// 	{
// 		m_a = 100;
// 		//m_b = 200;//静态成员函数不能访问非静态成员变量，无法区分到底是哪个对象的m_b;
// 		cout << "静态成员函数的调用" << endl;
// 	}
// 	static int m_a;//静态成员变量
// 	int m_b;//非静态成员变量
// 
// 	//静态成员函数也有访问权限
// private:
// 	static void func2()
// 	{
// 		cout << "静态成员函数2的调用" << endl;
// 	}
// };
// int Person::m_a = 100;
// 
// //有两种访问方式
// void test01()
// {
// 	//1、通过对象访问
// 	Person p;
// 	p.func();
// 
// 	//2、通过类名访问
// 	Person::func();
// 	//Person::func2();//静态成员函数也有访问权限
// }
// 
// int main()
// {
// 	test01();
// 
// 	system("pause");
// 
// 	return 0;
// }