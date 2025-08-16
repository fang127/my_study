// #include<iostream>
// using namespace std;
// 
// //深拷贝与浅拷贝
// //拷贝函数实际上是浅拷贝
// class Person
// {
// public:
// 	Person()
// 	{
// 		cout << "Person的默认构造函数调用" << endl;
// 	}
// 
// 	Person(int age,int height)
// 	{
// 		m_age = age;
// 		m_height = new int(height);//深拷贝
// 		cout << "Person的有参构造函数调用" << endl;
// 	}
// 
// 	Person(const Person& p)
// 	{
// 		cout << "Person的拷贝构造函数的调用" << endl;
// 		m_age = p.m_age;
// 		//m_height = p.m_height;编译器默认实现就是这行代码 浅拷贝
// 		//进行深拷贝操作：
// 		m_height = new int(*p.m_height);
// 	}
// 
// 	~Person()//浅拷贝的带来的问题是堆区大的内存重复释放   浅拷贝的问题要利用深拷贝进行解决
// 	{
// 		if (m_height != NULL)
// 		{
// 			delete m_height;
// 			m_height = NULL;
// 		}
// 		cout << "Person的析构函数调用" << endl;
// 	}
// 
// 	int m_age;
// 	int* m_height;//身高
// };
// 
// void test01()
// {
// 	Person p1(18,160);
// 	cout << "p1的年龄为：" << p1.m_age << endl;
// 	cout << "p1的身高为：" << *p1.m_height << endl;
// 
// 	Person p2(p1);//利用编译器自身提供的拷贝构造函数，会做浅拷贝 但是在堆区开辟的height需要手动释放，对象销毁前在结束时会自动调用析构函数，因此可以利用析构函数实现堆区开辟的数据的释放
// 	//浅拷贝的带来的问题是堆区大的内存重复释放   p2先释放一次后，p1又释放   浅拷贝的问题要利用深拷贝进行解决（自己实现一个拷贝构造函数解决）
// 	cout << "p2的年龄为：" << p2.m_age << endl;
// 	cout << "p2的身高为：" << *p2.m_height << endl;
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