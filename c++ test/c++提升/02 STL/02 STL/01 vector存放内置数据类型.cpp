// #include<iostream>
// using namespace std;
// #include<vector>
// #include<algorithm>
// 
// //vector�������������������
// void myprint(int val)
// {
// 	cout << val << endl;
// }
// 
// void test01()
// {
// 	//����һ��vector����������
// 	vector<int> v;
// 
// 	//�������в�������  push_back���� β��
// 	v.push_back(10);
// 	v.push_back(20);
// 	v.push_back(30);
// 	v.push_back(40);
// 
// 	//ͨ����������������������
// 	//begin ��ʼ������ ָ�������е�һ��Ԫ��
// // 	vector<int>::iterator itBegin = v.begin();
// // 	//end ���������� ָ�����������һ��Ԫ����һ��λ��
// // 	vector<int>::iterator itEnd = v.end();
// // 
// // 	//��һ�ֱ�����ʽ
// // 	while (itBegin != itEnd)
// // 	{
// // 		cout << *itBegin << endl;
// // 		itBegin++;
// // 	}
// 
// 	//�ڶ��ֱ�����ʽ
// // 	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
// // 	{
// // 		cout << *it << endl;
// // 	}
// 
// 	//�����ֱ�����ʽ ����STL�ṩ�ı����㷨
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