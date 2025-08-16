// #include<iostream>
// using namespace std;
// 
// //赋值运算符重载
// 
// class Person
// {
// public:
// 
// 	Person(int age)
// 	{
// 		m_Age = new int(age);
// 	}
// 
// 	//重载赋值运算符
// 	Person &operator=(const Person& p)
// 	{
// 		//应该先判断是否有属性在堆区，如果有，先释放干净，然后深拷贝
// 		if (m_Age != NULL)
// 		{
// 			delete m_Age;
// 			m_Age = NULL;
// 		}
// 		//深拷贝
// 		m_Age = new int(*p.m_Age);
// 		//返回对象本身
// 		return *this;
// 	}
// 
// 	~Person()
// 	{
// 		if (m_Age != NULL)
// 
// 		{
// 			delete m_Age;
// 			m_Age = NULL;
// 		}
// 	}
// 
// 	int* m_Age;
// };
// 
// void test01()
// {
// 	Person p1(18);
// 
// 	Person p2(20);
// 
// 	Person p3(30);
// 
// 	p3 = p2 = p1;//赋值运算操作
// 
// 	cout << *p1.m_Age << endl;
// 	cout << *p2.m_Age << endl;
// 	cout << *p3.m_Age << endl;
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