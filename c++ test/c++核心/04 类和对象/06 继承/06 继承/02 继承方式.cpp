// #include<iostream>
// using namespace std;
// 
// //继承方式
// 
// //公共继承
// class Base1
// {
// public:
// 	int m_A;
// protected:
// 	int m_B;
// private:
// 	int m_C;
// };
// 
// class Son1 : public Base1
// {
// public:
// 
// 	void func()
// 	{
// 		m_A = 10;//父类中公共权限成员 到子类中依然是公共权限
// 		m_B = 10;//父类中保护权限成员 到子类中依然是保护权限
// 		//m_C = 10;//父类中私有权限成员 子类访问不到
// 	}
// };
// 
// void test01()
// {
// 	Son1 s1;
// 	s1.m_A = 100;//公共权限类外可以访问
// 	//s1.m_B = 100;//保护权限类外不可访问
// }
// 
// //保护继承
// class Base2
// {
// public:
// 	int m_A;
// protected:
// 	int m_B;
// private:
// 	int m_C;
// };
// 
// class Son2 : protected Base2
// {
// public:
// 	void func()
// 	{
// 		m_A = 100;//父类公共成员 到子类变成保护权限
// 		m_B = 100;//父类中保护成员 到子类变为保护权限
// 		//m_C = 100;//父类私有成员 子类访问不到
// 	}
// };
// 
// void test02()
// {
// 	Son2 s2;
// // 	s2.m_A = 100;//在Son2中，m_A变为保护权限 类外不可访问
// // 	s2.m_B = 100;//在Son2中，m_B变为保护权限 类外不可访问
// // 	s2.m_C = 100;//在Base2中，m_C为私有权限 Son2不可访问
// }
// 
// //私有继承
// class Base3
// {
// public:
// 	int m_A;
// protected:
// 	int m_B;
// private:
// 	int m_C;
// };
// 
// class Son3 : private Base3
// {
// public:
// 	void func()
// 	{
// 		m_A = 100;//父类中公共权限成员 到子类变成私有成员
// 		m_B = 100;//父类中保护权限成员 到子类变成私有成员
// 		//m_C = 100;//父类中私有权限成员 子类无法访问
// 	}
// };
// 
// void test03()
// {
// 	Son3 s3;
// 	s3.m_A = 100;//私有成员无法访问
// 	s3.m_B = 100;//私有成员无法访问
// }
// 
// class GrandSon3 : public Son3
// {
// public:
// 	void func()
// 	{
// 		//到了Son3中，m_A和m_B变成私有，访问不到
// // 		m_A = 1000;
// // 		m_B = 1000;
// 	}
// };
// 
// int main()
// {
// 
// 
// 	system("pause");
// 
// 	return 0;
// }