// #include<iostream>
// using namespace std;
// //#include"Person.h"//������ͨ�༰��������.h������ģ���г�Ա�������ڵ���ʱ�Ŵ�����.h�Ļ�main�����޷�ʶ����ģ���г�Ա�����������Ҫ.cpp����Ϊ.cpp�ļ����ְ�����.h
// 
// //��һ�ֽ����ʽ��ֱ�Ӱ���Դ�ļ�
// #include"Person.hpp"
// 
// //�ڶ��ֽ����ʽ����.h��.cpp����д��һ�𣬽���׺����Ϊ.hpp�ļ�
// 
// //��ģ����ļ���д�����Լ����
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