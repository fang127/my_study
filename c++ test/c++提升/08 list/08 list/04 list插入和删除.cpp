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
// 	list<int>L;
// 
// 	//Î²²å
// 	L.push_back(10);
// 	L.push_back(20);
// 	L.push_back(30);
// 
// 	//Í·²å
// 	L.push_front(100);
// 	L.push_front(200);
// 	L.push_front(300);
// 
// 	printList(L);
// 
// 	//Î²É¾
// 	L.pop_back();
// 	printList(L);
// 
// 	//Í·É¾
// 	L.pop_front();
// 	printList(L);
// 
// 	//insert
// 	L.insert(L.begin(), 1000);
// 	printList(L);
// 
// 	L.insert(++L.begin(), 2000);
// 	printList(L);
// 
// 	//É¾³ý
// 	list<int>::iterator it = L.begin();
// 	L.erase(++it);
// 	printList(L);
// 
// 	//ÒÆ³ý
// 	L.push_back(10000);
// 	L.push_back(10000);
// 	L.push_back(10000);
// 	printList(L);
// 	L.remove(10000);
// 	printList(L);
// 	L.erase(++L.begin(), --L.end());
// 	printList(L);
// 
// 	//Çå¿Õ
// 	//L.erase(L.begin(), L.end());
// 	L.clear();
// 	printList(L);
// 
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