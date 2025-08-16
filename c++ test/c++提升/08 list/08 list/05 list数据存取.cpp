//#include<iostream>
//using namespace std;
//#include<list>
//
//void test01()
//{
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//
//	//list不可用[]和at访问
//	//因为list本质是链表，非连续的空间存储数据，迭代器也是不支持随机访问的
//	cout << "First element is " << l1.front() << endl;
//	cout << "Last element is " << l1.back() << endl;
//
//	//验证迭代器不支持随机访问
//	list<int>::iterator it = l1.begin();
//	//it = it + 1;//错误，不支持
//	it++;//支持双向
//	it--;
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