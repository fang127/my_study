// #include<iostream>
// using namespace std;
// 
// //关系运算符重载
// class Person
// {
// public:
// 
// 	Person(string name,int age)
// 	{
// 		m_Name = name;
// 		m_Age = age;
// 	}
// 
// 	//重载==运算符
// 	bool operator==(Person &p)
// 	{
// 		if (m_Age == p.m_Age && m_Name == p.m_Name)
// 		{
// 			return true;
// 		}
// 		return false;
// 	}
// 
// 	//重载!=运算符
// 	bool operator!=(Person& p)
// 	{
// 		if (m_Age == p.m_Age && m_Name == p.m_Name)
// 		{
// 			return false;
// 		}
// 		return true;
// 	}
// 
// 	string m_Name;
// 
// 	int m_Age;
// };
// 
// void test01()
// {
// 	Person p1("Tom", 18);
// 	Person p2("Tom", 18);
// 
// 	if (p1 != p2)
// 	{
// 		cout << "p1和p2不相等" << endl;
// 	}
// 	else
// 	{
// 		cout << "p1和p2相等" << endl;
// 	}
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