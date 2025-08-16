// #include<iostream>
// using namespace std;
// #include<list>
// #include<algorithm>
// 
// void func(int& val)
// {
// 	cout << val << " ";
// }
// 
// void printList(list<int>&lst)
// {
// 	for_each(lst.begin(), lst.end(), func);
// 	cout << endl;
// }
// 
// void test01()
// {
// 	list<int>l1;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		l1.push_back(i);
// 	}
// 	printList(l1);
// 
// 	list<int>l2 = l1;
// 	printList(l2);
// 
// 	list<int>l3;
// 	l3.assign(++l2.begin(), --l2.end());
// 	printList(l3);
// 
// 	list<int>l4;
// 	l4.assign(10, 100);
// 	printList(l4);
// 
// 	cout << "交换前：" << endl;
// 	printList(l1);
// 	printList(l4);
// 	cout << "交换后：" << endl;
// 	l1.swap(l4);
// 	printList(l1);
// 	printList(l4);
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