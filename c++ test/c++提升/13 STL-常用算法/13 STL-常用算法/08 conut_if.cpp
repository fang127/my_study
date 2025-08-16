// #include<iostream>
// using namespace std;
// #include<algorithm>
// #include<vector>
// //统计内置数据类型
// class Greater20
// {
// public:
// 	bool operator()(int val)
// 	{
// 		return val > 20;
// 	}
// };
// 
// void test01()
// {
// 	vector<int>v;
// 	v.push_back(10);
// 	v.push_back(30);
// 	v.push_back(20);
// 	v.push_back(40);
// 	v.push_back(50);
// 
// 	int num = count_if(v.begin(), v.end(), Greater20());
// 	cout << "大于20的数有 num = " << num << endl;
// }
// 
// //自定义数据类型
// class Person
// {
// public:
// 	Person(string name, int age)
// 	{
// 		this->M_Name = name;
// 		this->M_Age = age;
// 	}
// 	string M_Name;
// 	int M_Age;
// };
// class ageGreater13
// {
// public:
// 	bool operator()(const Person &p)
// 	{
// 		return p.M_Age > 13;
// 	}
// };
// void test02()
// {
// 	vector<Person>v;
// 	Person p1("Tom", 15);
// 	Person p2("Aom", 12);
// 	Person p3("Wom", 15);
// 	Person p4("Fom", 13);
// 	Person p5("Gom", 15);
// 	v.push_back(p1);
// 	v.push_back(p2);
// 	v.push_back(p3);
// 	v.push_back(p4);
// 	v.push_back(p5);
// 	int num = count_if(v.begin(), v.end(), ageGreater13());
// 	cout << "年龄大于13岁的人数 num = " << num << endl;
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