// #include<iostream>
// using namespace std;
// #include<list>
// #include<algorithm>
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
// bool mycompare(int v1,int v2)
// {
// 	//降序 让第一个数大于第二个数
// 	return v1 > v2;
// }
// 
// void test01()
// {
// 	list<int>L;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		int j = rand() % 101;
// 		L.push_back(j);
// 	}
// 	printList(L);
// 
// 	L.reverse();
// 	printList(L);
// 
// 	//sort(L.begin(),L.end());//错误 所有不支持随机访问迭代器的容器，不可以用标准算法
// 	//不支持随机访问迭代器的容器，内部会提供对应一些算法作为成员函数
// 	L.sort();
// 	printList(L);
// 
// 	//sort只能升序，如何降序？
// 	L.sort(mycompare);
// 	printList(L);
// }
// 
// int main()
// {
// 	srand((unsigned int)time(nullptr));
// 	test01();
// 
// 	system("pause");
// 
// 	return 0;
// }