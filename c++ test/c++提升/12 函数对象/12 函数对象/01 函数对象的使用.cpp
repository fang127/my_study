// #include<iostream>
// using namespace std;
// 
// //�������󣨷º�����
// 
// // * ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
// class Myadd
// {
// public:
// 	int operator()(int val1, int val2)
// 	{
// 		return val1 + val2;
// 	}
// };
// 
// void test01()
// {
// 	Myadd myadd;
// 	cout << myadd(10, 10) << endl;
// }
// 
// // * �������󳬳���ͨ�����ĸ����������������Լ���״̬
// class Myprint
// {
// public:
// 	Myprint()
// 	{
// 		this->count = 0;
// 	}
// 	void operator()(string test)
// 	{
// 		cout << test << endl;
// 		this->count++;
// 	}
// 
// 	int count;//�ڲ��Լ�״̬
// };
// 
// void test02()
// {
// 	Myprint myprint;
// 	myprint("Hello World");
// 	myprint("Hello World");
// 	myprint("Hello World");
// 	cout << "myprint���ô���Ϊ��" << myprint.count << endl;
// }
// 
// // * �������������Ϊ��������
// void doprint(Myprint& mp, string test)
// {
// 	mp(test);
// }
// 
// void test03()
// {
// 	Myprint myprint;
// 	doprint(myprint, "hello c++");
// }
// 
// int main()
// {
// 	//test01();
// 	//test02();
// 	test03();
// 
// 	system("pause");
// 
// 	return 0;
// }