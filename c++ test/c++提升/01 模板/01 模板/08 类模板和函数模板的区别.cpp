// #include<iostream>
// using namespace std;
// 
// //类模板与函数模板区别
// template<typename NameType,typename AgeType = int>
// class Person
// {
// public:
// 
// 	Person(NameType name, AgeType age)
// 	{
// 		this->m_age = age;
// 		this->m_name = name;
// 	}
// 
// 	void showperson()
// 	{
// 		cout << this->m_name << " " << this->m_age << endl;
// 	}
// 
// 	NameType m_name;
// 
// 	AgeType m_age;
// };
// 
// //1、类模板没有自动类型推导使用方式
// void test01()
// {
// 
// 	//Person p("Tom", 99);//错误，无法用自动类型推导
// 	Person<string, int>p("Tom", 99);//只能用显示指定类型
// 
// 	p.showperson();
// }
// 
// //2、类模板可以有默认参数
// void test02()
// {
// 	Person<string>p("Jack", 10);//有默认参数int，就不用显示指定int
// 
// 	p.showperson();
// }
// 
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