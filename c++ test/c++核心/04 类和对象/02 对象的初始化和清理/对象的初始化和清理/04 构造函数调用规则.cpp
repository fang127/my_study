// #include <iostream>
// using namespace std;
// 
// //���캯���ĵ��ù���
// //1������һ���࣬c++���������ÿ���඼���������������
// //Ĭ�Ϲ��죨��ʵ�֣�
// //������������ʵ�֣�
// //�������죨ֵ������
// 
// //2���������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬����Ȼ���ṩ��������
// //�������д�˿������캯�����������Ͳ����ṩ�������캯��
// class Person
// {
// public:
// // 	Person()
// // 	{
// // 		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
// // 	}
// 
// // 	Person(int age)
// // 	{
// // 		m_age = age;
// // 		cout << "�вι��캯���ĵ���" << endl;
// // 	}
// 
// 	Person(const Person& p)
// 	{
// 		m_age = p.m_age;
// 		cout << "�������캯���ĵ���" << endl;
// 	}
// 
// 	~Person()
// 	{
// 		cout << "���������ĵ���" << endl;
// 	}
// 
// 	int m_age;
// };
// 
// // void test01()
// // {
// // 	Person p;
// // 	p.m_age = 18;
// // 	Person p2(p);
// // 
// // 	cout << "p2������Ϊ��" << p2.m_age << endl;
// // }
// 
// void test02()
// {
// 	Person p;
// 	Person p2(p);
// 
// 	cout << "p2������Ϊ��" << p2.m_age << endl;
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