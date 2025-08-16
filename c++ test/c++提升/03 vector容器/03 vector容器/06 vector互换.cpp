// #include<iostream>
// using namespace std;
// #include<vector>
// 
// void print(vector<int>& v)
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
// 		v1.push_back(i);
// 	}
// 	cout << "交换前：" << endl;
// 	print(v1);
// 
// 	vector<int>v2;
// 	for (int i = 10; i > 0; i--)
// 	{
// 		v2.push_back(i);
// 	}
// 	print(v2);
// 
// 	cout << "交换后：" << endl;
// 	v1.swap(v2);
// 	print(v1);
// 	print(v2);
// }
// 
// //实际用途
// //可以收缩内存空间
// void test02()
// {
// 	vector<int>v;
// 	for (int i = 0; i < 100000; i++)
// 	{
// 		v.push_back(i);
// 	}
// 	cout << "v capacity is " << v.capacity() << endl;
// 	cout << "v size is " << v.size() << endl;
// 
// 	v.resize(3);//重新指定大小
// 	cout << "v capacity is " << v.capacity() << endl;
// 	cout << "v size is " << v.size() << endl;
// 
// 	//用swap收缩
// 	vector<int>(v).swap(v);//vector<int>(v)是匿名对象，利用拷贝构造创建匿名对象，会按实际大小拷贝，不会按容量
// 	//交换之后匿名对象容量很大，但是匿名对象当前行执行完了，会被系统自动释放
// 	cout << "v capacity is " << v.capacity() << endl;
// 	cout << "v size is " << v.size() << endl;
// }
// 
// int main()
// {
// 	//test01();
// 	test02();
// 
// 	system("pause");
// 
// 	return 0;
// }