// #include<iostream>
// using namespace std;
// #include<list>
// #include<algorithm>
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
// bool mycompare(int v1,int v2)
// {
// 	//���� �õ�һ�������ڵڶ�����
// 	return v1 > v2;
// }
// 
// void test01()
// {
// 	list<int>L;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		int j = rand() % 101;
// 		L.push_back(j);
// 	}
// 	printList(L);
// 
// 	L.reverse();
// 	printList(L);
// 
// 	//sort(L.begin(),L.end());//���� ���в�֧��������ʵ��������������������ñ�׼�㷨
// 	//��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨��Ϊ��Ա����
// 	L.sort();
// 	printList(L);
// 
// 	//sortֻ��������ν���
// 	L.sort(mycompare);
// 	printList(L);
// }
// 
// int main()
// {
// 	srand((unsigned int)time(nullptr));
// 	test01();
// 
// 	system("pause");
// 
// 	return 0;
// }