#include <iostream>
using namespace std;

int main1()
{
	//���鶨�巽ʽ����1
	//1���������� ������[���鳤��]
	int arr[5];
	
	//�������е�Ԫ�ؽ��и�ֵ
	//����Ԫ���е��±��Ǵ�0��ʼ��ǵ�
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	
	//��������Ԫ��
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;

	//2���������� ������[���鳤��] = {ֵ1��ֵ2��ֵ3...}
	//����ڳ�ʼ������ʱ��û����д��ȫ���ڴ棬����0�ʣ��ռ�
	int arr2[6] = { 10, 20, 30, 40, 50 };

	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[2] << endl;
	cout << arr2[3] << endl;
	cout << arr2[4] << endl;
	//�����������̫�鷳����������ѭ�����
	for (int i = 0; i < 6; i++)
	{
		cout << arr2[i] << endl;
	}

	//3���������� ������[ ] = {ֵ1��ֵ2��ֵ3...}
	//���������ʱ�򣬱����г�ʼ����,�������Ԫ�أ�ϵͳ���Զ�ƥ�䳤��
	int arr3[] = { 10,20,30,40,50,60,70,80,90 };
	for (int j = 0; j < 9; j++)
	{
		cout << arr3[j] << endl;
	}



	system("pause");

	return 0;
}