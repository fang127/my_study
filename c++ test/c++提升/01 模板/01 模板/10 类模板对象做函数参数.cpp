// #include<iostream>
// using namespace std;
// #include<string>
// 
// //��ģ���������������
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
// 		cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
// 	}
// 
// 	T1 m_name;
// 	T2 m_age;
// };
// 
// //1��ָ����������
// void printPerson1(Person<string,int>&p)
// {
// 	p.show_person();
// }
// 
// void test01()
// {
// 	Person<string,int>p("�����",100);
// 	printPerson1(p);
// }
// 
// //2������ģ�廯
// template<class T1,class T2>
// void printPerson2(Person<T1, T2>p)
// {
// 	p.show_person();
// 	cout << "T1�����ͣ�" << typeid(T1).name() << endl;
// 	cout << "T1�����ͣ�" << typeid(T2).name() << endl;
// }
// 
// void test02()
// {
// 	Person<string, int>p("Tom", 18);
// 	printPerson2(p);
// }
// 
// //3��������ģ�廯
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