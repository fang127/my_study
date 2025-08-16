// #include<iostream>
// using namespace std;
// 
// //函数对象（仿函数）
// 
// // * 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
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
// // * 函数对象超出普通函数的概念，函数对象可以有自己的状态
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
// 	int count;//内部自己状态
// };
// 
// void test02()
// {
// 	Myprint myprint;
// 	myprint("Hello World");
// 	myprint("Hello World");
// 	myprint("Hello World");
// 	cout << "myprint调用次数为：" << myprint.count << endl;
// }
// 
// // * 函数对象可以作为参数传递
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