// #include<iostream>
// using namespace std;
// #include<string>
// 
// //类模板对象做函数参数
// template<class T1,class T2>
// class Person
// {
// public:
// 
// 	Person(T1 name, T2 age)
// 	{
// 		this->m_name = name;
// 		this->m_age = age;
// 	}
// 
// 	void show_person()
// 	{
// 		cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
// 	}
// 
// 	T1 m_name;
// 	T2 m_age;
// };
// 
// //1、指定传入类型
// void printPerson1(Person<string,int>&p)
// {
// 	p.show_person();
// }
// 
// void test01()
// {
// 	Person<string,int>p("孙悟空",100);
// 	printPerson1(p);
// }
// 
// //2、参数模板化
// template<class T1,class T2>
// void printPerson2(Person<T1, T2>p)
// {
// 	p.show_person();
// 	cout << "T1的类型：" << typeid(T1).name() << endl;
// 	cout << "T1的类型：" << typeid(T2).name() << endl;
// }
// 
// void test02()
// {
// 	Person<string, int>p("Tom", 18);
// 	printPerson2(p);
// }
// 
// //3、整个类模板化
// template<class T>
// void printPerson3(T &p)
// {
// 	p.show_person();
// 	cout << "T type is:" << typeid(T).name() << endl;
// }
// 
// void test03()
// {
// 	Person<string, int>p("Jee", 19);
// 	printPerson3(p);
// }
// 
// int main()
// {
// 	//test01();
// 
// 	//test02();
// 
// 	test03();
// 
// 	system("pause");
// 
// 	return 0;
// }