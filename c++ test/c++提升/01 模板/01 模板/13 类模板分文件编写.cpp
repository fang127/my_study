// #include<iostream>
// using namespace std;
// //#include"Person.h"//错误，普通类及函数可以.h，但类模板中成员函数是在调用时才创建，.h的话main函数无法识别类模板中成员函数，因此需要.cpp，因为.cpp文件里又包含了.h
// 
// //第一种解决方式，直接包含源文件
// #include"Person.hpp"
// 
// //第二种解决方式，将.h和.cpp内容写到一起，将后缀名改为.hpp文件
// 
// //类模板分文件编写问题以及解决
// // template<class T1, class T2>
// // class Person
// // {
// // public:
// // 	Person(T1 name, T2 age);
// // 
// // 	void showPerson();
// // 
// // 	T1 m_name;
// // 
// // 	T2 m_age;
// // };
// // 
// // template<class T1, class T2>
// // Person<T1,T2>::Person(T1 name, T2 age)
// // {
// // 	this->m_name = name;
// // 	this->m_age = age;
// // }
// // 
// // template<class T1, class T2>
// // void Person<T1, T2>::showPerson()
// // {
// // 	cout << "name is : " << this->m_name << "\tage is : " << this->m_age << endl;
// // }
// 
// void test01()
// {
// 	Person<string, int>p("Tom", 19);
// 	p.showPerson();
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