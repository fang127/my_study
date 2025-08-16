// #include<iostream>
// using namespace std;
// 
// //类外实现
// //提前让编译器知道类模板存在
// template<class T1, class T2>
// class Person;
// //如果全局函数是类外实现，需要让编译器提前知道该函数存在
// template<class T1, class T2>
// void printPerson2(Person<T1, T2>p)
// {
// 	cout << "out------name : " << p.m_name << "\tage : " << p.m_age << endl;
// }
// 
// //类模板做友元
// //通过全局函数打印Person信息
// template<class T1,class T2>
// class Person
// {
// 	//全局函数 类内实现
// 	friend void printPerson(Person<T1,T2>p)
// 	{
// 		cout << "in-------name : " <<p.m_name << "\tage : " << p.m_age << endl;
// 	}
// 
// 	//全局函数 类外实现
// 	//加空模板参数列表，说明该函数为函数模板，否则类外实现是函数模板。类内是普通函数声明，代码错误
// 	//如果全局函数是类外实现，需要让编译器提前知道该函数存在
// 	friend void printPerson2<>(Person<T1, T2>p);
// 
// public:
// 	Person(T1 name,T2 age)
// 	{
// 		this->m_age = age;
// 		this->m_name = name;
// 	}
// 
// private:
// 	T1 m_name;
// 	T2 m_age;
// }; 
// 
// 
// 
// //1、全局函数 雷内实现
// void test01()
// {
// 	Person<string, int>p("Tom", 19);
// 	printPerson(p);
// }
// 
// void test02()
// {
// 	Person<string, int>p("Jom", 12);
// 	printPerson2(p);
// }
// 
// int main()
// {
// 	test01();
// 
// 	test02();
// 
// 	system("pause");
// 
// 	return 0;
// }