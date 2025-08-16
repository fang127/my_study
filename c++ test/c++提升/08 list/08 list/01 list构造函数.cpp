// #include<iostream>
// using namespace std;
// #include<list>
// #include<algorithm>
// 
// void printList(int &val)
// {
// 	cout << val << " ";
// }
// 
// void test01()
// {
// 	list<int>l1;
// 	l1.push_back(10);
// 	l1.push_back(20);
// 	l1.push_back(30);
// 	l1.push_back(40);
// 	l1.push_back(50);
// 
// 	for_each(l1.begin(), l1.end(), printList);
// 	cout << endl;
// 
// 	list<int>l2(l1.begin(), l1.end());
// 	for_each(l2.begin(), l2.end(), printList);
// 	cout << endl;
// 
// 	list<int>l3(l2);
// 	for_each(l3.begin(), l3.end(), printList);
// 	cout << endl;
// 
// 	list<int>l4(10, 100);
// 	for_each(l4.begin(), l4.end(), printList);
// 	cout << endl;
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