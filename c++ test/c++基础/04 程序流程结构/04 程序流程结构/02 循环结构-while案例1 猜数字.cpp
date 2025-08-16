#include <iostream>
using namespace std;
#include <ctime>

int main9()
{
	//系统随机生成一个1到100的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏
	//添加随机数种子，作用是利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	//1、系统生产随机数
	int num = rand() % 100 + 1; //rand()%100生成0-99的随机数,rand()%100+1生成1-100的随机数
	cout << "系统现在生成了一个数，你能猜出它是多少吗（整数1-100）" << endl;
	int word = 0;
	cout << "如果你觉得你可以请输入1，否则输入0" << endl;
	cin >> word;


// 	2、玩家进行猜测
// 	int guess = 0;
// 	cout << "请玩家输入猜测的数字：" << endl;
// 	cin >> guess;
// 	cout << "玩家猜测的数字为：" << guess << endl;

	//3、判断玩家的猜测
	if (word == 1)
	{
		//2、玩家进行猜测
		int guess = 0;
		cout << "请玩家输入猜测的数字：" << endl;
		cin >> guess;
		//cout << "玩家猜测的数字为：" << guess << endl;
		while (1) //1代表while进行死循环，直到猜对了，使用break退出循环
		{
			if (guess > num)
			{
				cout << "郭哥，你行不行？\n提示：你猜测的数字大了," << endl;
			}
			else if (guess < num)
			{
				cout << "郭哥，你行不行？\n提示：你猜测的数字小了" << endl;
			}
			else
			{
				cout << "小趴菜你居然猜对啦！\n" << "随机生成的数字为：" << num << endl;
				break; //break，可以利用该关键词退出当前循环
			}
			cout << "请再次输入猜测的数字：" << endl;
			cin >> guess;
		}
		//cout << "小趴菜你居然猜对啦！\n" << "随机生成的数字为：" << num << endl;
	}
	else
	{
		cout << "小趴菜，我就知道你不行" << endl;
	}

	//猜对 退出游戏
	//猜错 提示猜的结果大了还是小了

	system("pause");

	return 0;
}