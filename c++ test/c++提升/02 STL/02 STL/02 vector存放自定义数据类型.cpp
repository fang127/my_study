// #include<iostream>
// using namespace std;
// #include<vector>
// 
// //vector存放自定义数据类型
// class Person
// {
// public:
// 	Person(string name, int age)
// 	{
// 		this->m_name = name;
// 		this->m_age = age;
// 	}
// 
// 	string m_name;
// 	int m_age;
// };
// 
// void test01()
// {
// 	vector<Person> v;
// 	Person p1("Tom", 10);
// 	Person p2("Gom", 20);
// 	Person p3("wom", 30);
// 	Person p4("fom", 40);
// 	Person p5("xom", 50);
// 
// 	v.push_back(p1);
// 	v.push_back(p2);
// 	v.push_back(p3);
// 	v.push_back(p4);
// 	v.push_back(p5);
// 
// 	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
// 	{
// 		//cout << (*it).m_name << " " << (*it).m_age << endl;
// 		cout << it->m_name << " " << it->m_age << endl;
// 	}
// }
// 
// //存放自定义数据类型 指针
// void test02()
// {
// 	vector<Person*> v;
// 	Person p1("Tom", 10);
// 	Person p2("Gom", 20);
// 	Person p3("wom", 30);
// 	Person p4("fom", 40);
// 	Person p5("xom", 50);
// 
// 	v.push_back(&p1);
// 	v.push_back(&p2);
// 	v.push_back(&p3);
// 	v.push_back(&p4);
// 	v.push_back(&p5);
// 
// 	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
// 	{
// 		cout << (*it)->m_name << " " << (*it)->m_age << endl;
// 	}
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