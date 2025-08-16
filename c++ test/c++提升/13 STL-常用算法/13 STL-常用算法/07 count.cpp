// #include<iostream>
// using namespace std;
// #include<algorithm>
// #include<vector>
// 
// //统计内置数据类型
// void test01()
// {
// 	vector<int>v;
// 	v.push_back(10);
// 	v.push_back(40);
// 	v.push_back(30);
// 	v.push_back(40);
// 	v.push_back(20);
// 	v.push_back(30);
// 	v.push_back(40);
// 
// 	int num = count(v.begin(), v.end(), 40);
// 	cout << "num = " << num << endl;
// }
// 
// //统计自定义数据类型
// class Person
// {
// public:
// 	Person(string name, int age)
// 	{
// 		this->m_name = name;
// 		this->m_age = age;
// 	}
// 	bool operator==(const Person& p)
// 	{
// 		if (this->m_age == p.m_age)
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
// 	Person p1("关羽", 22);
// 	Person p2("张飞", 22);
// 	Person p3("赵云", 27);
// 	Person p4("曹操", 25);
// 	Person p5("刘备", 22);
// 	v.push_back(p1);
// 	v.push_back(p2);
// 	v.push_back(p3);
// 	v.push_back(p4);
// 	v.push_back(p5);
// 	Person p("诸葛亮", 22);
// 	int num = count(v.begin(), v.end(), p);
// 	cout << "和诸葛亮同岁的人数为 num = " << num << endl;
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