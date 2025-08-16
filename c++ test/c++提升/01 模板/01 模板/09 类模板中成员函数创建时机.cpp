// #include<iostream>
// using namespace std;
// 
// //类模板中成员函数创建时机
// //在调用时才创建
// 
// class Person1
// {
// public:
// 	void showperson1()
// 	{
// 		cout << "person1 show" << endl;
// 	}
// };
// 
// class Person2
// {
// public:
// 	void showperson2()
// 	{
// 		cout << "person2 show" << endl;
// 	}
// };
// 
// template<class T>
// class Myclass
// {
// public:
// 
// 	T obj;
// 
// 	//类模板中成员函数
// 	void func()
// 	{
// 		obj.showperson1();//没有调用时无法创建，因为不知道obj的类型
// 	}
// 
// 	void func2()
// 	{
// 		obj.showperson2();
// 	}
// };
// 
// void test01()
// {
// 	Myclass<Person1>m;
// 	m.func();
// 	//m.func2();
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