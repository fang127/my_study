// #include<iostream>
// using namespace std;
// 
// //��ͨ�����ͺ���ģ��ĵ��ù���
// //1���������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
// //2������ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
// //3������ģ��Ҳ���Է�����������
// //4���������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
// 
// void myPrint(int a,int b)
// {
// 	cout << "������ͨ����" << endl;
// }
// 
// template<typename T>
// void myPrint(T a, T b)
// {
// 	cout << "����myPrint(T a, T b)����ģ��" << endl;
// }
// 
// template<typename T>
// void myPrint(T a, T b,T c)
// {
// 	cout << "����myPrint(T a, T b,T c)����ģ��" << endl;
// }
// 
// void test01()
// {
// 	int a = 10;
// 	int b = 20;
// 	myPrint(a, b);
// 
// 	//ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
// 	myPrint<>(a,b);
// 
// 	//����ģ��Ҳ���Է�����������
// 	myPrint(a, b, 100);
// 
// 	//�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
// 	char c1 = 'a';
// 	char c2 = 'b';
// 	myPrint(c1, c2);
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