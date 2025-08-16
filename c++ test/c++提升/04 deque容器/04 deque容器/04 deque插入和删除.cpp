// #include<iostream>
// using namespace std;
// #include<deque>
// 
// void printDeque(const deque<int>& d)
// {
// 	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
// 	{
// 		cout << *it << " ";
// 	}
// 	cout << endl;
// }
// 
// void test01()
// {
// 	deque<int>d1;
// 	d1.push_back(10);
// 	d1.push_back(20);
// 	d1.push_back(30);
// 
// 	d1.push_front(100);
// 	d1.push_front(200);
// 	d1.push_front(300);
// 	printDeque(d1);
// 
// 	d1.pop_back();
// 	printDeque(d1);
// 	d1.pop_front();
// 	printDeque(d1);
// }
// 
// void test02()
// {
// 	deque<int>d1;
// 	d1.push_back(10);
// 	d1.push_back(20);
// 	d1.push_back(30);
// 	d1.push_front(100);
// 	d1.push_front(200);
// 	d1.push_front(300);
// 	printDeque(d1);
// 
// 	//insert
// 	d1.insert(d1.begin(), 1000);
// 	printDeque(d1);
// 
// 	d1.insert(d1.begin(), 2, 10000);
// 	printDeque(d1);
// 
// 	deque<int>d2;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		d2.push_back(i);
// 	}
// 
// 	d1.insert(d1.begin() + 2, d2.begin(), d2.end());
// 	printDeque(d1);
// }
// 
// void test03()
// {
// 	deque<int>d1;
// 	d1.push_back(10);
// 	d1.push_back(20);
// 	d1.push_back(30);
// 	d1.push_front(100);
// 	d1.push_front(200);
// 	d1.push_front(300);
// 	printDeque(d1);
// 
// 	//eraseºÍclear
// 	d1.erase(d1.begin());
// 	printDeque(d1);
// 
// 	d1.erase(d1.begin() + 1, d1.begin() + 3);
// 	printDeque(d1);
// 
// 	d1.clear();
// 	printDeque(d1);
// }
// 
// int main()
// {
// 	//test01();
// 	//test02();
// 	test03();
// 
// 	system("pause");
// 
// 	return 0;
// }