#include <iostream>
using namespace std;

//有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重

int main5()
{
	int A = 0;
	int B = 0;
	int C = 0;

	cout << "请分别输入三只小猪A、B、C的体重" << endl;
	cin >> A >> B >> C;

	cout << "小猪A的体重为：" << A << endl;
	cout << "小猪B的体重为：" << B << endl;
	cout << "小猪C的体重为：" << C << endl;

	if (A > B)
	{
		if (B > C)
		{
			cout << "三只小猪的体重由大到小为" << "A>B>C" << endl;
		}
		if (B < C)
		{
			if (A > C)
			{
				cout << "三只小猪的体重由大到小为" << "A>C>B" << endl;
			}
			else
			{
				cout << "三只小猪的体重由大到小为" << "C>A>B" << endl;
			}
		}
	}
	if (A < B)
	{
		if (B < C)
		{
			cout << "三只小猪的体重由大到小为" << "C>B>A" << endl;
		}
		if (B > C)
		{
			if (A > C)
			{
				cout << "三只小猪的体重由大到小为" << "B>A>C" << endl;
			}
			else
			{
				cout << "三只小猪的体重由大到小为" << "B>C>A" << endl;
			}
		}
	}
	

	system("pause");

	return 0;
}