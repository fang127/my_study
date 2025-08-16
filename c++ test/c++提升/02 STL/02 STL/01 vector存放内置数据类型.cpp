// #include<iostream>
// using namespace std;
// #include<vector>
// #include<algorithm>
// 
// //vector容器存放内置数据类型
// void myprint(int val)
// {
// 	cout << val << endl;
// }
// 
// void test01()
// {
// 	//创建一个vector容器，数组
// 	vector<int> v;
// 
// 	//向容器中插入数据  push_back函数 尾插
// 	v.push_back(10);
// 	v.push_back(20);
// 	v.push_back(30);
// 	v.push_back(40);
// 
// 	//通过迭代器访问容器中数据
// 	//begin 起始迭代器 指向容器中第一个元素
// // 	vector<int>::iterator itBegin = v.begin();
// // 	//end 结束迭代器 指向容器中最后一个元素下一个位置
// // 	vector<int>::iterator itEnd = v.end();
// // 
// // 	//第一种遍历方式
// // 	while (itBegin != itEnd)
// // 	{
// // 		cout << *itBegin << endl;
// // 		itBegin++;
// // 	}
// 
// 	//第二种遍历方式
// // 	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
// // 	{
// // 		cout << *it << endl;
// // 	}
// 
// 	//第三种遍历方式 利用STL提供的遍历算法
// 	for_each(v.begin(), v.end(),myprint);
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