// #include<iostream>
// using namespace std;
// 
// //��ֵ���������
// 
// class Person
// {
// public:
// 
// 	Person(int age)
// 	{
// 		m_Age = new int(age);
// 	}
// 
// 	//���ظ�ֵ�����
// 	Person &operator=(const Person& p)
// 	{
// 		//Ӧ�����ж��Ƿ��������ڶ���������У����ͷŸɾ���Ȼ�����
// 		if (m_Age != NULL)
// 		{
// 			delete m_Age;
// 			m_Age = NULL;
// 		}
// 		//���
// 		m_Age = new int(*p.m_Age);
// 		//���ض�����
// 		return *this;
// 	}
// 
// 	~Person()
// 	{
// 		if (m_Age != NULL)
// 
// 		{
// 			delete m_Age;
// 			m_Age = NULL;
// 		}
// 	}
// 
// 	int* m_Age;
// };
// 
// void test01()
// {
// 	Person p1(18);
// 
// 	Person p2(20);
// 
// 	Person p3(30);
// 
// 	p3 = p2 = p1;//��ֵ�������
// 
// 	cout << *p1.m_Age << endl;
// 	cout << *p2.m_Age << endl;
// 	cout << *p3.m_Age << endl;
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