#include <iostream>
using namespace std;

//����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС������

int main5()
{
	int A = 0;
	int B = 0;
	int C = 0;

	cout << "��ֱ�������ֻС��A��B��C������" << endl;
	cin >> A >> B >> C;

	cout << "С��A������Ϊ��" << A << endl;
	cout << "С��B������Ϊ��" << B << endl;
	cout << "С��C������Ϊ��" << C << endl;

	if (A > B)
	{
		if (B > C)
		{
			cout << "��ֻС��������ɴ�СΪ" << "A>B>C" << endl;
		}
		if (B < C)
		{
			if (A > C)
			{
				cout << "��ֻС��������ɴ�СΪ" << "A>C>B" << endl;
			}
			else
			{
				cout << "��ֻС��������ɴ�СΪ" << "C>A>B" << endl;
			}
		}
	}
	if (A < B)
	{
		if (B < C)
		{
			cout << "��ֻС��������ɴ�СΪ" << "C>B>A" << endl;
		}
		if (B > C)
		{
			if (A > C)
			{
				cout << "��ֻС��������ɴ�СΪ" << "B>A>C" << endl;
			}
			else
			{
				cout << "��ֻС��������ɴ�СΪ" << "B>C>A" << endl;
			}
		}
	}
	

	system("pause");

	return 0;
}