// #include<iostream>
// using namespace std;
// #include<vector>;
// 
// void printvector(vector<int>& v)
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
// 	printvector(v1);
// 
// 	if (v1.empty())//为真，容器为空
// 	{
// 		cout << "vector is empty" << endl;
// 	}
// 	else
// 	{
// 		cout << "vector is not empty.vector capacity is " << v1.capacity() << endl;
// 		cout << "vector size is " << v1.size() << endl;
// 	}
// 
// 	//重新指定大小
// 	v1.resize(11);
// 	printvector(v1);//如果重新指定的比原来长，默认用0填充新位置
// 
// 	v1.resize(15, 100);
// 	printvector(v1);
// 
// 	v1.resize(5);//短了，会删除超出部分
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