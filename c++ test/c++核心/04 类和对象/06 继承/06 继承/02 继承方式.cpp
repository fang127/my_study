// #include<iostream>
// using namespace std;
// 
// //�̳з�ʽ
// 
// //�����̳�
// class Base1
// {
// public:
// 	int m_A;
// protected:
// 	int m_B;
// private:
// 	int m_C;
// };
// 
// class Son1 : public Base1
// {
// public:
// 
// 	void func()
// 	{
// 		m_A = 10;//�����й���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
// 		m_B = 10;//�����б���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
// 		//m_C = 10;//������˽��Ȩ�޳�Ա ������ʲ���
// 	}
// };
// 
// void test01()
// {
// 	Son1 s1;
// 	s1.m_A = 100;//����Ȩ��������Է���
// 	//s1.m_B = 100;//����Ȩ�����ⲻ�ɷ���
// }
// 
// //�����̳�
// class Base2
// {
// public:
// 	int m_A;
// protected:
// 	int m_B;
// private:
// 	int m_C;
// };
// 
// class Son2 : protected Base2
// {
// public:
// 	void func()
// 	{
// 		m_A = 100;//���๫����Ա �������ɱ���Ȩ��
// 		m_B = 100;//�����б�����Ա �������Ϊ����Ȩ��
// 		//m_C = 100;//����˽�г�Ա ������ʲ���
// 	}
// };
// 
// void test02()
// {
// 	Son2 s2;
// // 	s2.m_A = 100;//��Son2�У�m_A��Ϊ����Ȩ�� ���ⲻ�ɷ���
// // 	s2.m_B = 100;//��Son2�У�m_B��Ϊ����Ȩ�� ���ⲻ�ɷ���
// // 	s2.m_C = 100;//��Base2�У�m_CΪ˽��Ȩ�� Son2���ɷ���
// }
// 
// //˽�м̳�
// class Base3
// {
// public:
// 	int m_A;
// protected:
// 	int m_B;
// private:
// 	int m_C;
// };
// 
// class Son3 : private Base3
// {
// public:
// 	void func()
// 	{
// 		m_A = 100;//�����й���Ȩ�޳�Ա ��������˽�г�Ա
// 		m_B = 100;//�����б���Ȩ�޳�Ա ��������˽�г�Ա
// 		//m_C = 100;//������˽��Ȩ�޳�Ա �����޷�����
// 	}
// };
// 
// void test03()
// {
// 	Son3 s3;
// 	s3.m_A = 100;//˽�г�Ա�޷�����
// 	s3.m_B = 100;//˽�г�Ա�޷�����
// }
// 
// class GrandSon3 : public Son3
// {
// public:
// 	void func()
// 	{
// 		//����Son3�У�m_A��m_B���˽�У����ʲ���
// // 		m_A = 1000;
// // 		m_B = 1000;
// 	}
// };
// 
// int main()
// {
// 
// 
// 	system("pause");
// 
// 	return 0;
// }