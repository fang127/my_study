// #include<iostream>
// using namespace std;
// 
// //��ģ���г�Ա��������ʱ��
// //�ڵ���ʱ�Ŵ���
// 
// class Person1
// {
// public:
// 	void showperson1()
// 	{
// 		cout << "person1 show" << endl;
// 	}
// };
// 
// class Person2
// {
// public:
// 	void showperson2()
// 	{
// 		cout << "person2 show" << endl;
// 	}
// };
// 
// template<class T>
// class Myclass
// {
// public:
// 
// 	T obj;
// 
// 	//��ģ���г�Ա����
// 	void func()
// 	{
// 		obj.showperson1();//û�е���ʱ�޷���������Ϊ��֪��obj������
// 	}
// 
// 	void func2()
// 	{
// 		obj.showperson2();
// 	}
// };
// 
// void test01()
// {
// 	Myclass<Person1>m;
// 	m.func();
// 	//m.func2();
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