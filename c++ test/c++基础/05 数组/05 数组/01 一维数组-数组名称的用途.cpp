#include <iostream>
using namespace std;

int main2()
{
	//�������Ƶ���;
	//1��ͳ����������ռ���ڴ�Ĵ�С
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	cout << "��������ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ͳ��ÿ��Ԫ����ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�صĸ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2�����Բ鿴�����׵�ַ
	cout << "������׵�ַΪ��" << arr << endl; //���Ϊ�׵�ַ��Ϊ16����
	cout << "������׵�ַΪ��" << (long long)arr << endl;//���Ϊ�׵�ַ��ǿ�ƽ�16����תΪ10����
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (long long)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (long long)&arr[1] << endl;//�ڶ����͵�һ��Ԫ��λ�ý����ţ���4�ֽ�

	//�������ǳ����������Խ��и�ֵ����
	//arr = 100

	system("pause");

	return 0;
}