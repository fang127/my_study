// #include <iostream>
// using namespace std;
// 
// //�������������
// class Person
// {
// 	friend ostream& operator<<(ostream& cout, Person& p);
// public:
// 	Person(int a,int b)
// 	{
// 		m_A = a;
// 		m_B = b;
// 	}
// 	//���ó�Ա�����������������
// 	//�������ó�Ա��������<<���������Ϊ�޷�ʵ��cout�����
// // 	void operator<<(cout)//p.operator<<cout;
// // 	{
// // 
// // 	}
// 
// private:
// 
// 	int m_A;
// 	int m_B;
// 
// };
// 
// //ֻ������ȫ�ֺ����������������
// ostream &operator<<(ostream &cout, Person &p)//���� operator<<(cout,p)��cout<<p
// {
// 	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
// 
// 	return cout;
// }
// 
// void test01()
// {
// 	Person p(10,10);
// 	cout << p << endl; //ostream &operatorһ��Ҫ��& ���򲻿���ֱ��<<endl������&�Ϳ��Բ��Ϸ���cout��ʵ����ʽ˼ά
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