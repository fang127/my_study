#include <iostream>
using namespace std;
#include <string>

int main()
{
	//����������������ͬѧ�����������ġ����壩����һ�ο����еĳɼ��ֱ��±���ֱ������λͬѧ����ܳɼ�
	int arr[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	cout << "\t" << "����\t" << "��ѧ\t" << "Ӣ��\t" << "�ܳɼ�\t" << endl;

	string names[3] = { "����","����","����" };

	for (int i = 0; i < 3; i++)
	{
		cout << names[i] << "\t";
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
			cout << arr[i][j] << "\t";
		}
		cout << sum << "\t" << endl;
	}

// 	cout << "����\t";
// 	int sum = 0;
// 	for (int i = 0; i < 3; i++)
// 	{
// 		sum += arr[0][i];
// 		cout << arr[0][i] << "\t";
// 	}
// 	cout << sum << endl;
// 
// 	cout << "����\t";
// 	int sum2 = 0;
// 	for (int i = 0; i < 3; i++)
// 	{
// 		sum2 += arr[1][i];
// 		cout << arr[1][i] << "\t";
// 	}
// 	cout << sum2 << endl;
// 
// 	cout << "����\t";
// 	int sum3 = 0;
// 	for (int i = 0; i < 3; i++)
// 	{
// 		sum3 += arr[2][i];
// 		cout << arr[2][i] << "\t";
// 	}
// 	cout << sum3 << endl;




	system("pause");

	return 0;
}