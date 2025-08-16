// #include<iostream>
// using namespace std;
// #include<list>
// 
// void printList(const list<int>& l)
// {
// 	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
// 	{
// 		cout << *it << " ";
// 	}
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
// 	if (!l1.empty())
// 	{
// 		cout << "L1 is not empty!" << endl;
// 		cout << "L1 size is " << l1.size() << endl;
// 	}
// 	else
// 	{
// 		cout << "L1 is empty!" << endl;
// 	}
// 
// 	l1.resize(15);
// 	printList(l1);
// 
// 	l1.resize(20, 100);
// 	printList(l1);
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