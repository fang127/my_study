// #include<iostream>
// using namespace std;
// 
// //��ģ���뺯��ģ������
// template<typename NameType,typename AgeType = int>
// class Person
// {
// public:
// 
// 	Person(NameType name, AgeType age)
// 	{
// 		this->m_age = age;
// 		this->m_name = name;
// 	}
// 
// 	void showperson()
// 	{
// 		cout << this->m_name << " " << this->m_age << endl;
// 	}
// 
// 	NameType m_name;
// 
// 	AgeType m_age;
// };
// 
// //1����ģ��û���Զ������Ƶ�ʹ�÷�ʽ
// void test01()
// {
// 
// 	//Person p("Tom", 99);//�����޷����Զ������Ƶ�
// 	Person<string, int>p("Tom", 99);//ֻ������ʾָ������
// 
// 	p.showperson();
// }
// 
// //2����ģ�������Ĭ�ϲ���
// void test02()
// {
// 	Person<string>p("Jack", 10);//��Ĭ�ϲ���int���Ͳ�����ʾָ��int
// 
// 	p.showperson();
// }
// 
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