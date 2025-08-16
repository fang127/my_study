// #include <iostream>
// using namespace std;
// 
// class Person
// {
// public:
// 	Person(int age)
// 	{
// 		//age = age;//错误，名称冲突无法识别第一个age是成员变量
// 		this->age = age;//this指针指向被调用成员函数所属的对象
// 	}
// 
// 	Person& PersonAddAge(Person& p)//当返回 Person& 时，返回的是当前对象的引用。调用者可以直接继续对该对象进行操作（实现链式调用）。如果返回 Person（而不是 Person& ），返回的是当前对象的副本（而不是引用）。这意味着返回的对象会是* this 对象的一个拷贝，而不是原始对象的引用。
// 	{
// 		this->age += p.age;
// 
// 		//this是指向p2的指针，*this是p2本体
// 		return *this;
// 	}
// 
// 	int age;
// };
// 
// //1、解决名称冲突
// void test01()
// {
// 	Person p1(18);
// 	cout << "p1.age = " << p1.age << endl;
// }
// 
// //2、返回对象本身用return *this
// void test02()
// {
// 	Person p1(10);
// 
// 	Person p2(10);
// 
// 	//链式编程思想
// 	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
// 
// 	cout << "p2.age = " << p2.age << endl;
// }
// 
// int main()
// {
// 	//test01();
// 	test02();
// 
// 	system("pause");
// 
// 	return 0;
// }