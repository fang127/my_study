// #include<iostream>
// using namespace std;
// 
// //�̳�ͬ����̬��Ա����
// class Base
// {
// public:
// 
// 	static int m_A;
// 
// 	static void func()
// 	{
// 		cout << "Base�µľ�̬��Ա��������" << endl;
// 	}
// 
// 	static void func(int a)
// 	{
// 		cout << "Base(int a)�µľ�̬��Ա��������" << endl;
// 	}
// };
// int Base::m_A = 100;
// 
// class Son : public Base
// {
// public:
// 	static int m_A;
// 
// 	static void func()
// 	{
// 		cout << "Son�µľ�̬��Ա��������" << endl;
// 	}
// };
// int Son::m_A = 200;
// 
// void test01()
// {
// 	//1��ͨ���������
// 	Son s;
// 	cout << "Son�µ�m_A = " << s.m_A << endl;
// 	cout << "Base�µ�m_A = " << s.Base::m_A << endl;
// 	//2��ͨ����������
// 	cout << "ͨ���������ʣ�" << Son::m_A << endl;
// 	cout << "ͨ���������ʣ�" << Base::m_A << endl;
// 	//��һ��::����ͨ��������ʽ���� �ڶ���::������ʸ�����������
// 	cout << "ͨ���������ʣ�" << Son::Base::m_A << endl;
// }
// 
// //ͬ����̬����
// void test02()
// {
// 	//1��ͨ���������
// 	Son s;
// 	s.func();
// 	s.Base::func();
// 
// 	//2��ͨ����������
// 	Son::func();
// 	Son::Base::func();
// 	//������ֺ͸���ͬ���ľ�̬��Ա������Ҳ�����ظ���������ͬ����Ա����
// 	//���Ҫ���ʸ����б����صĳ�Ա��������Ҫ��������
// 	Son::Base::func(100);
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