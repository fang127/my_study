// #include<iostream>
// using namespace std;
// 
// //ģ�������
// //ģ�岢�������ܵ� ��Щ�����������ͣ���Ҫ���廯��ʽ������ʵ��
// 
// class Person
// {
// public:
// 
// 	Person(string name, int age)
// 	{
// 		this->m_name = name;
// 		this->m_age = age;
// 	}
// 
// 	string m_name;
// 
// 	int m_age;
// };
// 
// //���������
// // bool operator==(const Person& p1, const Person& p2)
// // {
// // 	if (p1.m_age == p2.m_age && p1.m_name == p2.m_name)
// // 	{
// // 		return true;
// // 	}
// // 	else
// // 	{
// // 		return false;
// // 	}
// // 	
// // }
// 
// //�Ա����������Ƿ���Ⱥ���
// template<typename T>
// bool myCompare(T& a, T& b)
// {
// 	if (a == b)//���ַ�����һ����������أ�����Person����
// 	{
// 		return true;
// 	}
// 	else
// 	{
// 		return false;
// 	}
// }
// 
// //���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
// template<> bool myCompare(Person& a, Person& b)
// {
// 	if(a.m_age == b.m_age && a.m_name == b.m_name)
// 	{
// 		 return true;
//  	}
//  	else
// 	{
// 	 	return false;
//  	}
// }
// 
// void test01()
// {
// 	int a = 10;
// 	int b = 20;
// 
// 	bool ret = myCompare(a, b);
// 
// 	if (ret)
// 	{
// 		cout << "a = b" << endl;
// 	}
// 	else
// 	{
// 		cout << "a != b" << endl;
// 	}
// }
// 
// void test02()
// {
// 	Person p1("Tom", 10);
// 	Person p2("Tom", 11);
// 
// 	bool ret = myCompare(p1, p2);
// 	if (ret)
// 	{
// 		cout << "p1 = p2" << endl;
// 	}
// 	else
// 	{
// 		cout << "p1 != p2" << endl;
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