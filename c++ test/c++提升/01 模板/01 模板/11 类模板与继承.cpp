// #include<iostream>
// using namespace std;
// 
// //��ģ����̳�
// template<class T>
// class Base
// {
// public:
// 	T m;
// 
// 	Base()
// 	{
// 		cout << "T type is " << typeid(T).name() << endl;
// 	}
// };
// 
// class Son : public Base<int> //�����޷�֪��T���������ͣ���˲�֪��ռ�ö����ڴ�ռ䣬�޷������ڴ档��˱���֪��������T���ͣ��ſ��Լ̳�
// {
// 
// };
// 
// // void test01()
// // {
// // 	Son s1;
// // }
// 
// //���������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
// template<class T1,class T2>
// class Son2 : public Base<T2>
// {
// public:
// 
// 	Son2()
// 	{
// 		cout << "T1 type is " << typeid(T1).name() << endl;
// 		cout << "T2 type is " << typeid(T2).name() << endl;
// 	}
// 
// 	T1 obj;
// };
// 
// void test02()
// {
// 	Son2<int, char>s2;
// }
// 
// int main()
// {
// 	//test01();
// 
// 	test02();
// 
// 	system("pause");
// 
// 	return 0;
// }