// #include<iostream>
// using namespace std;
// #include<algorithm>
// #include<vector>
// 
// class Transform
// {
// public:
// 	int operator()(int val)
// 	{
// 		return val + 100;
// 	}
// };
// 
// class myprint
// {
// public:
// 	void operator()(int val)
// 	{
// 		cout << val << " ";
// 	}
// };
// 
// void test01()
// {
// 	vector<int>v;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		v.push_back(i);
// 	}
// 
// 	vector<int>vTarget;
// 	vTarget.resize(v.size());//提前开辟空间
// 	transform(v.begin(), v.end(), vTarget.begin(), Transform());
// 	for_each(vTarget.begin(), vTarget.end(), myprint());
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