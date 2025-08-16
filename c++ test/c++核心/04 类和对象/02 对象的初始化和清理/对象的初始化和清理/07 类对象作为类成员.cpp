// #include <iostream>
// using namespace std;
// 
// //类对象作类成员
// class Phone
// {
// public:
// 	string p_name;//品牌
// 
// 	//构造
// 	Phone(string pname)
// 	{
// 		p_name = pname;
// 		cout << "Phone的构造函数的调用" << endl;
// 	}
// 
// 	~Phone()
// 	{
// 		cout << "Phone析构函数调用" << endl;
// 	}
// };
// 
// class Person
// {
// public:
// 	//属性
// 	string m_name;//姓名
// 	Phone m_phone;//手机
// 
// 	//行为
// 	//Phone m_phone = pname//隐式转换法 Phone m_phone = Phone(m_phone)
// 	Person(string name, string pname) :m_name(name), m_phone(pname)
// 	{
// 		cout << "Person的构造函数的调用" << endl;
// 	}
// 
// 	~Person()
// 	{
// 		cout << "Person析构函数调用" << endl;
// 	}
// };
// 
// void test01()
// {
// 	Person p("张三", "苹果MAX");
// 
// 	cout << p.m_name << " 手机是 " << p.m_phone.p_name << endl;
// }
// 
// //当其他类的对象作为本类的成员，在构造时，先构造类对象，再构造类自身，析构的顺序与构造相反
// 
// int main()
// {
// 	test01();
// 
// 	system("pause");
// 
// 	return 0;
// }
