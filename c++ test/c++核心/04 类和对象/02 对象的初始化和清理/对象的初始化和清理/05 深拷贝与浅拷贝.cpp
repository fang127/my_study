// #include<iostream>
// using namespace std;
// 
// //�����ǳ����
// //��������ʵ������ǳ����
// class Person
// {
// public:
// 	Person()
// 	{
// 		cout << "Person��Ĭ�Ϲ��캯������" << endl;
// 	}
// 
// 	Person(int age,int height)
// 	{
// 		m_age = age;
// 		m_height = new int(height);//���
// 		cout << "Person���вι��캯������" << endl;
// 	}
// 
// 	Person(const Person& p)
// 	{
// 		cout << "Person�Ŀ������캯���ĵ���" << endl;
// 		m_age = p.m_age;
// 		//m_height = p.m_height;������Ĭ��ʵ�־������д��� ǳ����
// 		//�������������
// 		m_height = new int(*p.m_height);
// 	}
// 
// 	~Person()//ǳ�����Ĵ����������Ƕ�������ڴ��ظ��ͷ�   ǳ����������Ҫ����������н��
// 	{
// 		if (m_height != NULL)
// 		{
// 			delete m_height;
// 			m_height = NULL;
// 		}
// 		cout << "Person��������������" << endl;
// 	}
// 
// 	int m_age;
// 	int* m_height;//���
// };
// 
// void test01()
// {
// 	Person p1(18,160);
// 	cout << "p1������Ϊ��" << p1.m_age << endl;
// 	cout << "p1�����Ϊ��" << *p1.m_height << endl;
// 
// 	Person p2(p1);//���ñ����������ṩ�Ŀ������캯��������ǳ���� �����ڶ������ٵ�height��Ҫ�ֶ��ͷţ���������ǰ�ڽ���ʱ���Զ�����������������˿���������������ʵ�ֶ������ٵ����ݵ��ͷ�
// 	//ǳ�����Ĵ����������Ƕ�������ڴ��ظ��ͷ�   p2���ͷ�һ�κ�p1���ͷ�   ǳ����������Ҫ����������н�����Լ�ʵ��һ���������캯�������
// 	cout << "p2������Ϊ��" << p2.m_age << endl;
// 	cout << "p2�����Ϊ��" << *p2.m_height << endl;
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