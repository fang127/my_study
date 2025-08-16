// #include<iostream>
// using namespace std;
// #include<algorithm>
// #include<vector>
// 
// //查找内置数据类型
// void test01()
// {
// 	vector<int>v;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		v.push_back(i);
// 	}
// 
// 	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
// 	if (pos != v.end())
// 	{
// 		cout << "找到了 " << *pos << endl;
// 	}
// 	else
// 	{
// 		cout << "未找到" << endl;
// 	}
// }
// 
// //自定义数据类型
// class Person
// {
// public:
// 	Person(string name, int age)
// 	{
// 		this->m_age = age;
// 		this->m_name = name;
// 	}
// 	bool operator==(const Person&p)
// 	{
// 		if (this->m_name == p.m_name && this->m_age == p.m_age)
// 		{
// 			return true;
// 		}
// 		else
// 		{
// 			return false;
// 		}
// 	}
// 	string m_name;
// 	int m_age;
// };
// 
// void test02()
// {
// 	vector<Person>v;
// 	Person p1("Tom", 10);
// 	Person p2("Aom", 45);
// 	Person p3("Som", 21);
// 	Person p4("GFom", 22);
// 	Person p5("SADm", 20);
// 	v.push_back(p1);
// 	v.push_back(p2);
// 	v.push_back(p3);
// 	v.push_back(p4);
// 	v.push_back(p5);
// 
// 	Person p("Aom", 45);
// 
// 	vector<Person>::iterator pos = find(v.begin(), v.end(), p);
// 	if (pos == v.end())
// 	{
// 		cout << "未找到" << endl;
// 	}
// 	else
// 	{
// 		cout << "找到了 " << pos->m_name << " " << pos->m_age << endl;
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