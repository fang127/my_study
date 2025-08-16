#include <iostream>
using namespace std;

int main7()
{
	//switch语句
	//给电影打分
	//10~9 经典
	//8~7 非常好
	//6~5 一般
	//5以下 烂片

	//1、提示用户给电影评分
	cout << "请给电影进行打分" << endl;

	//2、用户开始打分
	int score = 0;
	cin >> score;
	cout << "您给此电影打的分数为：" << score << endl;

	//3、根据用户输入的分数提示用户最后的结果
	switch (score)
	{
	case 10:
		cout << "您认为是经典电影。" << endl;
		break; //代表退出当前分支，否则继续执行下面case代码.即case如果后面不跟break，那么代码会一直向下执行。
	case 9:
		cout << "您认为是经典电影。" << endl;
		break;
	case 8:
		cout << "您认为是非常好的电影。" << endl;
		break;
	case 7:
		cout << "您认为是非常好的电影。" << endl;
		break;
	case 6:
		cout << "您认为是一般的电影。" << endl;
		break;
	case 5:
		cout << "您认为是一般的电影。" << endl;
		break;
	default:
		cout << "您认为是烂片。" << endl;
		break;
	}

	//if和switch的区别
	//switch缺点是在判断的时候，只能是整型或者字符型，不可以是一个区间
	//switch优点是结构清晰，执行效率高

	system("pause");

	return 0;
}