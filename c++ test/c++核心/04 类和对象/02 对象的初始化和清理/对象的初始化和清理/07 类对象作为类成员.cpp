// #include <iostream>
// using namespace std;
// 
// //����������Ա
// class Phone
// {
// public:
// 	string p_name;//Ʒ��
// 
// 	//����
// 	Phone(string pname)
// 	{
// 		p_name = pname;
// 		cout << "Phone�Ĺ��캯���ĵ���" << endl;
// 	}
// 
// 	~Phone()
// 	{
// 		cout << "Phone������������" << endl;
// 	}
// };
// 
// class Person
// {
// public:
// 	//����
// 	string m_name;//����
// 	Phone m_phone;//�ֻ�
// 
// 	//��Ϊ
// 	//Phone m_phone = pname//��ʽת���� Phone m_phone = Phone(m_phone)
// 	Person(string name, string pname) :m_name(name), m_phone(pname)
// 	{
// 		cout << "Person�Ĺ��캯���ĵ���" << endl;
// 	}
// 
// 	~Person()
// 	{
// 		cout << "Person������������" << endl;
// 	}
// };
// 
// void test01()
// {
// 	Person p("����", "ƻ��MAX");
// 
// 	cout << p.m_name << " �ֻ��� " << p.m_phone.p_name << endl;
// }
// 
// //��������Ķ�����Ϊ����ĳ�Ա���ڹ���ʱ���ȹ���������ٹ���������������˳���빹���෴
// 
// int main()
// {
// 	test01();
// 
// 	system("pause");
// 
// 	return 0;
// }
