// #include<iostream>
// using namespace std;
// 
// //��̬��Ա����
// class Person
// {
// public:
// 	//1�����ж�����һ������
// 	//2������׶ξͷ����ڴ�
// 	//3�����������������ʼ������
// 	static int m_a;
// 	//��̬��Ա����Ҳ�з���Ȩ��
// private:
// 	static int m_b;
// };
// 
// int Person::m_a = 100; //�����ʼ��
// int Person::m_b = 200;
// 
// void test01()
// {
// 	Person p;
// 	cout << p.m_a << endl;
// 
// 	Person p2;
// 	p2.m_a = 200;
// 	cout << p.m_a << endl; //���ж�����һ������,����p2�ģ�pҲ�͸���
// }
// 
// void test02()
// {
// 	//��̬��Ա���� ������ĳ�������ϣ����ж�����ͬһ������
// 	//��˾�̬��Ա���������ַ��ʷ�ʽ
// 
// 	//1��ͨ���������
// 	Person p;
// 	cout << p.m_a << endl;
// 
// 	//2��ͨ����������
// 	cout << Person::m_a << endl;
// 	//cout << Person::m_b << endl;//˽��Ȩ�ޣ����Բ�����ͨ����������
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
