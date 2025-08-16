// #include<iostream>
// using namespace std;
// #include<algorithm>
// #include<vector>
// 
// //find_if查找内置数据类型
// class Greaterfive
// {
// public:
// 	bool operator()(int val)
// 	{
// 		return val > 5;
// 	}
// };
// 
// void test01()
// {
// 	vector<int>v;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		v.push_back(i);
// 	}
// 	vector<int>::iterator pos = find_if(v.begin(), v.end(), Greaterfive());
// 	if (pos == v.end())
// 	{
// 		cout << "Do not find" << endl;
// 	}
// 	else
// 	{
// 		cout << "Find it! " << *pos << endl;
// 	}
// }
// 
// //查找自定义数据类型
// class Person
// {
// public:
// 	Person(string name, int age)
// 	{
// 		this->m_age = age;
// 		this->m_name = name;
// 	}
// 	string m_name;
// 	int m_age;
// };
// 
// class compare
// {
// public:
// 	bool operator()(Person &p)
// 	{
// 		return p.m_age > 20;
// 	}
// };
// 
// void test02()
// {
// 	vector<Person>v;
// 	Person p1("aaa", 10);
// 	Person p2("bbb", 20);
// 	Person p3("vvv", 30);
// 	Person p4("ccc", 40);
// 	Person p5("ddd", 50);
// 	v.push_back(p1);
// 	v.push_back(p2);
// 	v.push_back(p3);
// 	v.push_back(p4);
// 	v.push_back(p5);
// 	vector<Person>::iterator it = find_if(v.begin(), v.end(), compare());
// 	if (it == v.end())
// 	{
// 		cout << "Do not find it" << endl;
// 	}
// 	else
// 	{
// 		cout << "Find it! " << it->m_name << " " << it->m_age << endl;
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