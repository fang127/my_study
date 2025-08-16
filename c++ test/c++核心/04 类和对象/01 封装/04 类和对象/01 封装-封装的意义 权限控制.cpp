// #include <iostream>
// using namespace std;
// 
// //访问权限3种
// //公共权限public  成员在类内可以访问 类外也可以访问
// 
// //保护权限protected  成员类内可以访问 类外不可以访问  
// 
// //私有权限private  成员类内可以访问 类外不可以访问   和保护权限看起来一样，主要区别体现在继承的特性：子可以继承访问父的保护权限，但是不可以继承访问私有权限
// 
// class Person
// {
// public://公共权限
// 	string m_name;//姓名
// protected://保护权限
// 	string m_car;//汽车
// private://私有权限
// 	int m_password;//银行卡密码
// 
// public:
// 	void func()
// 	{
// 		m_name = "张三";
// 		m_car = "拖拉机";
// 		m_password = 123456;
// 	}//都可以访问，因为是class后面大括号内容，属于类内
// 
// protected:
// 	void func2()
// 	{
// 		m_name = "张三";
// 		m_car = "拖拉机";
// 		m_password = 123456;
// 	}//都可以访问，因为是class后面大括号内容，属于类内
// 
// private:
// 	void func3()
// 	{
// 		m_name = "张三";
// 		m_car = "拖拉机";
// 		m_password = 123456;
// 	}//都可以访问，因为是class后面大括号内容，属于类内
// };
// 
// int main()
// {
// 	//实例化具体对象
// 	Person p1;
// 
// 	p1.m_name = "李四";//正确，公共权限的内容，在类外可以访问
// 
// 	//p1.m_car = "奔驰";//错误，保护权限的内容，在类外不能访问
// 
// 	//p1.m_password = 123456;//错误，私有权限的内容，在类外不能访问
// 
// 	p1.func();//正确，公共权限的内容，在类外可以访问
// 
// 	//p1.func2();//错误，保护权限的内容，在类外不能访问
// 
// 	//p1.func3();//错误，私有权限的内容，在类外不能访问
// 
// 	system("pause");
// 
// 	return 0;
// }