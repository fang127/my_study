// #include <iostream>
// using namespace std;
// 
// class Student
// {
// public://公共权限
// 
// 	//类中的属性和行为 我们统一称为 成员
// 	//属性  成员属性 成员变量
// 	//行为  成员函数 成员方法
// 	
// 	//属性
// 	string m_name;
// 	string m_id;
// 
// 	//行为
// 	void show_stu()
// 	{
// 		cout << "姓名：" << m_name << " 学号：" << m_id << endl;
// 	}
// 
// 	//通过行为给属性赋值
// 	void setName(string name)
// 	{
// 		m_name = name;
// 	}
// 
// 	void setID(string id)
// 	{
// 		m_id = id;
// 	}
// };
// 
// int main()
// {
// 	Student stu1;
// 	stu1.m_name = "张三";
// 	stu1.m_id = "123456";
// 	stu1.show_stu();
// 
// 	Student stu2;
// 	stu2.m_name = "李四";
// 	stu2.m_id = "111111";
// 	stu2.show_stu();
// 
// 	//通过行为给属性赋值
// 	Student stu3;
// 	stu3.setName("王五");
// 	stu3.setID("213333");
// 	stu3.show_stu();
// 
// 	system("pause");
// 
// 	return 0;
// }