// #include <iostream>
// using namespace std;
// #include<string>
// 
// //成员属性设置为私有
// //1、可以自己控制读写权限
// //2、对于写权限，可以检测数据有效性
// 
// //人类
// class Person
// {
// public:
// 	//设置姓名 
// 	void setname(string name)
// 	{
// 		m_name = name;
// 	}
// 	//姓名获取函数
// 	string getname()
// 	{
// 		return m_name;
// 	}
// 
// 	//获取年龄
// 	int getage()
// 	{
// 		return m_age;
// 	}
// 
// 	void setidol(string idol)
// 	{
// 		m_idol = idol;
// 	}
// 
// 	string setgender()
// 	{
// 		return m_gender;
// 	}
// 
// 	void getgender(string gender)
// 	{
// 		if (m_gender != "男" || m_gender != "女")
// 		{
// 			cout << "数据有误，请重新赋值" << endl;
// 			return;
// 		}
// 		else
// 		{
// 			m_gender = gender;
// 		}
// 	}
// 
// private:
// 	string m_name;//姓名 可读可写
// 
// 	int m_age = 18;//年龄 只读
// 
// 	string m_idol;//偶像 只写
// 
// 	string m_gender;//性别 可读可写 但要检测数据有效性
// };
// 
// int main()
// {
// 	Person p;
// 
// 	//p.m_name = "张三";//错误，私有属性不可以类外访问
// 
// 	//怎么对私有属性进行控制
// 
// 	//姓名设置 可读可写
// 	p.setname("张三");
// 	//获取姓名
// 	cout << "姓名：" << p.getname() << endl;
// 
// 	//年龄设置 只读
// 	//p.setage(20);//错误
// 	//p.m_age = 20;//错误 私有属性类外不可访问
// 	//获取年龄
// 	cout << "年龄：" << p.getage() << endl;
// 
// 	//设置偶像 只写
// 	p.setidol("周杰伦");
// 	//获取属性
// 	//cout << "偶像：" << p.m_idol << endl;
// 	//cout << "偶像：" << p.getidol << endl;
// 
// 	p.getgender("三");
// 	cout << "性别：" << p.setgender() << endl;
// 
// 	system("pause");
// 
// 	return 0;
// }