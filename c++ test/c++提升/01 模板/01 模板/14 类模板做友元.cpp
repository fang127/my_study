// #include<iostream>
// using namespace std;
// 
// //����ʵ��
// //��ǰ�ñ�����֪����ģ�����
// template<class T1, class T2>
// class Person;
// //���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪���ú�������
// template<class T1, class T2>
// void printPerson2(Person<T1, T2>p)
// {
// 	cout << "out------name : " << p.m_name << "\tage : " << p.m_age << endl;
// }
// 
// //��ģ������Ԫ
// //ͨ��ȫ�ֺ�����ӡPerson��Ϣ
// template<class T1,class T2>
// class Person
// {
// 	//ȫ�ֺ��� ����ʵ��
// 	friend void printPerson(Person<T1,T2>p)
// 	{
// 		cout << "in-------name : " <<p.m_name << "\tage : " << p.m_age << endl;
// 	}
// 
// 	//ȫ�ֺ��� ����ʵ��
// 	//�ӿ�ģ������б�˵���ú���Ϊ����ģ�壬��������ʵ���Ǻ���ģ�塣��������ͨ�����������������
// 	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪���ú�������
// 	friend void printPerson2<>(Person<T1, T2>p);
// 
// public:
// 	Person(T1 name,T2 age)
// 	{
// 		this->m_age = age;
// 		this->m_name = name;
// 	}
// 
// private:
// 	T1 m_name;
// 	T2 m_age;
// }; 
// 
// 
// 
// //1��ȫ�ֺ��� ����ʵ��
// void test01()
// {
// 	Person<string, int>p("Tom", 19);
// 	printPerson(p);
// }
// 
// void test02()
// {
// 	Person<string, int>p("Jom", 12);
// 	printPerson2(p);
// }
// 
// int main()
// {
// 	test01();
// 
// 	test02();
// 
// 	system("pause");
// 
// 	return 0;
// }