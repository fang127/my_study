// #include<iostream>
// using namespace std;
// #include<deque>
// 
// void test01()
// {
// 	deque<int> d;
// 	d.push_back(10);
// 	d.push_back(20);
// 	d.push_back(30);
// 	d.push_front(100);
// 	d.push_front(200);
// 	d.push_front(300);
// 
// 	//[]
// 	for (int i = 0; i < d.size(); i++)
// 	{
// 		cout << d[i] << " ";
// 	}
// 	cout << endl;
// 
// 	//at
// 	for (int i = 0; i < d.size(); i++)
// 	{
// 		cout << d.at(i) << " ";
// 	}
// 	cout << endl;
// 
// 	cout << "First element is " << d.front() << endl;
// 	cout << "Last element is " << d.back() << endl;
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