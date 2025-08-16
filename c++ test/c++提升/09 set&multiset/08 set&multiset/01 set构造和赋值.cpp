//#include <iostream>
//using namespace std;
//#include<set>
//
//void printset(const set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//
//	//set插入数据只有insert方式
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(50);
//	s1.insert(40);
//
//	//set所有元素插入自动排序
//	//set不允许插入重复元素
//	printset(s1);
//
//	set<int>s2(s1);
//	printset(s2);
//
//	//赋值
//	set<int>s3;
//	s3 = s2;
//	printset(s3);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}