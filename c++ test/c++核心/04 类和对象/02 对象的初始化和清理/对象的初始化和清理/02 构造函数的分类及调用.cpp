// #include<iostream>
// using namespace std;
// 
// //构造函数的分类及调用
// //分类
// //按参数分类 有参构造 无参构造
// //按类型分类 普通构造 拷贝构造
// class Person
// {
// 	//构造函数
// public:
// 	//普通构造
// 	  //无参
// 	Person()
// 	{
// 		cout << "无参构造函数的调用" << endl;
// 	}
// 	  //有参
// 	Person(int a)
// 	{
// 		age = a;
// 		cout << "有参构造函数的调用" << endl;
// 	}
// 	//拷贝构造函数
// 	Person(const Person &p)
// 	{
// 		//将传入的人的所有属性，拷贝到当前对象身上
// 		age = p.age;
// 		cout << "拷贝构造函数的调用" << endl;
// 	}
// 	//析构函数
// 	~Person()
// 	{
// 		cout << "析构函数的调用" << endl;
// 	}
// 	int age;
// };
// 
// //调用
// void test01()
// {
// 	//1、括号法
// 	//Person p1;//默认构造函数的调用
// 	//Person p2(10);//有参构造函数的调用
// 	//Person p3(p2);//拷贝构造函数的调用
// 	////注意事项
// 	////调用默认构造函数的时候，不要加（）  因为下面这行代码编译器会认为是一个函数的声明，不会认为在创建对象
// 	//Person p4();
// 	//cout << "p2的年龄为：" << p2.age << endl;
// 	//cout << "p3的年龄为：" << p3.age << endl;
// 	////2、显示法
// 	//Person p5;
// 	//Person p6 = Person(10);//有参构造函数的调用 
// 	//Person p7 = Person(p2);//拷贝构造函数的调用
// 	//Person(10); //Person(10)为匿名对象（特点：当当前执行结束后，系统会立即回收掉匿名对象）
// 	//cout << "aaaaa" << endl;
// 
// 	//注意事项
// 	//不要利用拷贝构造函数 初始化匿名对象   编译器会认为Person(p7) === Person p7;对象的声明
// 	//Person(p7);
// 
// 	//3、隐式转换法
// 	Person p8 = 10;//相当于 Person p8 = Person(10) //有参构造函数的调用 
// 	Person p9 = p8;//拷贝构造函数的调用
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