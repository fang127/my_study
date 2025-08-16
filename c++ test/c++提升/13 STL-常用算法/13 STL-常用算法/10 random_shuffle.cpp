// #include<iostream>
// using namespace std;
// #include<algorithm>
// #include<vector>
// #include<ctime>
// 
// void myprint(int val)
// {
// 	cout << val << " ";
// }
// 
// void test01()
// {
// 	srand((unsigned int)time(nullptr));
// 	vector<int>v;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		v.push_back(i);
// 	}
// 
// 	//ÀûÓÃÏ´ÅÆ ´òÂÒË³Ðò
// 	random_shuffle(v.begin(), v.end());
// 	for_each(v.begin(), v.end(), myprint);
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