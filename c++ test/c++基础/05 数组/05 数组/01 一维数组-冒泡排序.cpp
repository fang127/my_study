#include <iostream>
using namespace std;

int main5()
{
	//ð������
	int arr[] = { 4,2,8,0,5,7,1,3,9 };

	cout << "����ǰ�Ľ��Ϊ��" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
  	cout << endl;

	//��ʼð������
	for (int i = 0; i < 9 - 1; i++) //����������Ϊ Ԫ�ظ���-1
	{
		//�ڲ�ѭ���Ա�
		for (int j = 0; j < 9 - i - 1; j++) //�ڲ�ѭ������=Ԫ�ظ���-��ǰ�ִ�-1
		{
			//�����һ��Ԫ�رȵڶ����󣬽�������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "�����Ľ��Ϊ��" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");

	return 0;
}