#include <iostream>
using namespace std;

int main4()
{
	//����������������һ��5��Ԫ�ص����飬���ҽ�Ԫ������
	
	//1����������
	int arr[] = { 1,35,54,645,2 };
	cout << "��������ǰΪ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	//2��ʵ������
	int start = 0; //��¼��ʼ�±�λ��
	int end = sizeof(arr) / sizeof(arr[0]) - 1; //��¼�����±�λ��

	while (start < end)
	{
		int temp = arr[start]; //������ʱ�ռ䴢���һ������Ԫ�أ����ⱻ���һ��Ԫ�ظ����Ҳ�����
		arr[start] = arr[end]; //��ʼ�±�������±��Ԫ�ػ���
		arr[end] = temp; //������ʱ�ռ䴢���һ������Ԫ�أ����ⱻ���һ��Ԫ�ظ����Ҳ�����
		start++;//��ʼλ��+1������λ��-1
		end--;
	}

	//3����ӡ���ú������
	cout << "����Ԫ�����ú�Ϊ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	
	system("pause");

	return 0;
}