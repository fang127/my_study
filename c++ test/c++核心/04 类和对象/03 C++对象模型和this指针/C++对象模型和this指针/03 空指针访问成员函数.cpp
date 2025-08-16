// #include<iostream>
// using namespace std;
// 
// //空指针调用成员函数
// 
// class Person
// {
// public:
// 	void showClassName()
// 	{
// 		cout << "this is Person class" << endl;
// 	}
// 
// 	void showPersonAge()
// 	{
// 		//cout << "m_age = " << m_age << endl;//m_age实际是this->m_age  报错是因为传入的指针是NULL
// 
// 		//修改为：
// 		if (this == NULL)
// 		{
// 			return;
// 		}
// 		cout << "m_age = " << m_age << endl;
// 	}
// 
// 	int m_age;
// };
// 
// void test01()
// {
// 	Person* p = NULL;
// 	p->showClassName();
// 	p->showPersonAge();
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