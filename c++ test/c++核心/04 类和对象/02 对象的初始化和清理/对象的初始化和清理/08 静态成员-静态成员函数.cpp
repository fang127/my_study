// #include<iostream>
// using namespace std;
// 
// //��̬��Ա����
// //���ж�����ͬһ������
// //��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
// 
// class Person
// {
// public:
// 	//��̬��Ա����
// 	static void func()
// 	{
// 		m_a = 100;
// 		//m_b = 200;//��̬��Ա�������ܷ��ʷǾ�̬��Ա�������޷����ֵ������ĸ������m_b;
// 		cout << "��̬��Ա�����ĵ���" << endl;
// 	}
// 	static int m_a;//��̬��Ա����
// 	int m_b;//�Ǿ�̬��Ա����
// 
// 	//��̬��Ա����Ҳ�з���Ȩ��
// private:
// 	static void func2()
// 	{
// 		cout << "��̬��Ա����2�ĵ���" << endl;
// 	}
// };
// int Person::m_a = 100;
// 
// //�����ַ��ʷ�ʽ
// void test01()
// {
// 	//1��ͨ���������
// 	Person p;
// 	p.func();
// 
// 	//2��ͨ����������
// 	Person::func();
// 	//Person::func2();//��̬��Ա����Ҳ�з���Ȩ��
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