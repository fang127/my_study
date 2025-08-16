#include <iostream>
using namespace std;
#include <string>

int main()
{
	//案例描述：有三名同学（张三、李四、王五），再一次考试中的成绩分别下表，请分别输出三位同学大的总成绩
	int arr[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	cout << "\t" << "语文\t" << "数学\t" << "英语\t" << "总成绩\t" << endl;

	string names[3] = { "张三","李四","王五" };

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

// 	cout << "张三\t";
// 	int sum = 0;
// 	for (int i = 0; i < 3; i++)
// 	{
// 		sum += arr[0][i];
// 		cout << arr[0][i] << "\t";
// 	}
// 	cout << sum << endl;
// 
// 	cout << "李四\t";
// 	int sum2 = 0;
// 	for (int i = 0; i < 3; i++)
// 	{
// 		sum2 += arr[1][i];
// 		cout << arr[1][i] << "\t";
// 	}
// 	cout << sum2 << endl;
// 
// 	cout << "王五\t";
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