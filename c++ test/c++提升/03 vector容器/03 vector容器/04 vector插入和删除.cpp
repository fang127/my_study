// #include<iostream>
// using namespace std;
// #include<vector>
// 
// void printvector(vector<int>&v)
// {
// 	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
// 	{
// 		cout << *it << " ";
// 	}
// 	cout << endl;
// }
// 
// void test01()
// {
// 	vector<int>v1;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		//尾插
// 		v1.push_back(10 * i);
// 	}
// 	printvector(v1);
// 
// 	//尾删
// 	v1.pop_back();
// 	printvector(v1);
// 
// 	//插入 第一个参数是迭代器
// 	v1.insert(v1.begin(), 100);
// 	printvector(v1);
// 
// 	v1.insert(v1.begin(), 2, 1000);
// 	printvector(v1);
// 
// 	//删除
// 	v1.erase(v1.begin());
// 	printvector(v1);
// 
// 	//v1.erase(v1.begin(), v1.end());//类似清空
// 	v1.clear();
// 	printvector(v1);
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