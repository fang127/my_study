// #include<iostream>
// using namespace std;
// 
// //�̳���ͬ����Ա����
// class Base
// {
// public:
// 	Base()
// 	{
// 		m_A = 100;
// 	}
// 
// 	void func()
// 	{
// 		cout << "Base�µ�func()����" << endl;
// 	}
// 
// 	void func(int a)
// 	{
// 		cout << "Base�µ�func(int a)����" << endl;
// 	}
// 
// 	int m_A;
// };
// 
// class Son : public Base
// {
// public:
// 	Son()
// 	{
// 		m_A = 200;
// 	}
// 
// 	void func()
// 	{
// 		cout << "Son�µ�func()����" << endl;
// 	}
// 
// 	int m_A;
// };
// 
// //ͬ����Ա����
// void test01()
// {
// 	Son s;
// 	cout << "Son��m_A = " << s.m_A << endl;//ֱ�ӵ����������е�ͬ����Ա
// 	//���ͨ��������� ���ʸ����µ�ͬ����Ա����Ҫ��������
// 	cout << "Base��m_A = " << s.Base::m_A << endl;
// }
// 
// //ͬ����������
// void test02()
// {
// 	Son s;
// 	s.func();//ֱ�ӵ����������е�ͬ����Ա
// 	s.Base::func();//���ø���Ҫ�Ӹ���������
// 	
// 	//��������г����˺͸���ͬ���ĳ�Ա����������ͬ����Ա�����ص�����������ͬ���ĳ�Ա����
// 	//s.func(100);
// 	//�������ʵ������б����ص�ͬ����Ա���� Ҫ��������
// 	s.Base::func(100);
// }
// 
// int main()
// {
// 	test01();
// 	test02();
// 
// 	system("pause");
// 
// 	return 0;
// }