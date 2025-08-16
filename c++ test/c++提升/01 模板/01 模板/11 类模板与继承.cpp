// #include<iostream>
// using namespace std;
// 
// //类模板与继承
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
// class Son : public Base<int> //错误，无法知道T的数据类型，因此不知道占用多少内存空间，无法分配内存。因此必须知道父类中T类型，才可以继承
// {
// 
// };
// 
// // void test01()
// // {
// // 	Son s1;
// // }
// 
// //如果想灵活的指定父类中T类型，子类也需要变类模板
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