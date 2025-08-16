// #include <iostream>
// using namespace std;
// 
// class C1
// {
// 	int m_A;//默认权限 私有
// };
// 
// struct C2
// {
// 	int m_A;//默认权限 公共
// };
// 
// int main()
// {
// 	//struct和class的区别
// 	//struct的默认权限是公共public
// 	//class默认权限是私有private
// 	C1 c1;
// 	//c1.m_A = 100;//默认权限私有，类外不可以访问
// 
// 	C2 c2;
// 	c2.m_A = 100;//默认权限公共，类外可以访问
// 
// 	system("pause");
// 
// 	return 0;
// }