//#include<iostream>
//using namespace std;
//
////��ͨ�����ͺ���ģ������
////1����ͨ�������ÿ��Է�����ʽ����ת��
////2������ģ�� �Զ������Ƶ������Է�����ʽ����ת��  ��ʾָ�����Ϳ��Է�����ʽ����ת��
//
////��ͨ����
//int myAdd01(int a,int b)
//{
//	return a + b;
//}
//
////����ģ��
//template<typename T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';//c��ASCIIΪ99
//	cout << myAdd01(a, c) << endl;//��ͨ������������ʽ����ת����10 + 99
//
//	//�Զ������Ƶ�����
//	cout << myAdd02(a, b) << endl;
//	//cout << myAdd02(a, c) << endl;//�޷��Զ������Ƶ�����֪����תΪint����char
//
//	//��ʾָ������
//	cout << myAdd02<int>(a, c) << endl;
//	cout << myAdd02<char>(a, c) << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}