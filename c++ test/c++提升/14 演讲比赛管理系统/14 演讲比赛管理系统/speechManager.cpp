#include"speechManager.h"

speechManager::speechManager()
{
	//初始化属性
	this->initSpeech();
	//创建比赛人员
	this->create_speaker();
	//加载往届记录
	this->loadRecord();
}

speechManager::~speechManager()
{

}

void speechManager::show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*************  欢迎参加演讲比赛 ************" << endl;
	cout << "*************  1.开始演讲比赛  *************" << endl;
	cout << "*************  2.查看往届记录  *************" << endl;
	cout << "*************  3.清空比赛记录  *************" << endl;
	cout << "*************  0.退出比赛程序  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void speechManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

void speechManager::initSpeech()
{
	this->v1.clear();
	this->v2.clear();
	this->victory.clear();
	this->m_Speaker.clear();
	this->m_Index = 1;
	this->m_Record.clear();
}

void speechManager::create_speaker()
{
	string seedName = "ABCDEFGHIJKL";
	for (int i = 0; i < 12; i++)
	{
		string name = "选手";
		name += seedName[i];
		double score[2];
		for (int j = 0; j < 2; j++)
		{
			score[j] = 0;
		}
		Speaker p(name, score);
		//创建选手编号，放入v1容器
		this->v1.push_back(i + 10001);
		//选手编号以及选手放入map
		this->m_Speaker.insert(make_pair(i + 10001, p));
	}
} 

void speechManager::chouqian()
{
	cout << "第" << this->m_Index << "轮比赛开始抽签！" << endl;
	cout << "----------------------------------------" << endl;
	cout << "抽签后演讲顺序如下：" << endl;
	if (this->m_Index == 1)
	{
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "----------------------------------------" << endl;
	system("pause");
	cout << endl;
}

void speechManager::startspeech()
{
	cout << "第" << this->m_Index << "轮比赛正式开始！" << endl;
	cout << "----------------------------------------" << endl;
	//准备临时容器，存放小组成绩
	multimap<double, int, greater<double>>groupscore;
	//记录人员个数 6人一组
	int num = 0;
	vector<int>v;//比赛选手容器
	if (this->m_Index == 1)
	{
		v = v1;
	}
	else
	{
		v = v2;
	}

	//遍历所有选手进行比赛
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		num++;
		//评委打分
		deque<double>d;
		for(int i = 0;i < 10;i++)
		{
			double score = (rand() % 401 + 600) / 10.f; //60-100
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;
		sort(d.begin(), d.end(), greater<double>());//排序
		d.pop_front();//去除最高分和最低分
		d.pop_back();
		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();//平均分
		//平均分放入map容器中
		this->m_Speaker[*it].avgscore(avg,this->m_Index);
		//打印平均分 测试
// 		cout << "ID : " << * it << "\t";
// 		this->m_Speaker[*it].printspeaker(this->m_Index);
		//将打分数据放入临时小组容器中
		groupscore.insert(make_pair(avg, *it));//key是得分，value为选手编号，按得分排序
		//每六人取前三名
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组比赛排名：" << endl;
			for (multimap<double, int, greater<double>>::iterator it
				= groupscore.begin(); it != groupscore.end(); it++)
			{
				cout << "ID : " << it->second << "\t";
				this->m_Speaker[it->second].printspeaker(this->m_Index);
			}
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it 
				= groupscore.begin(); it != groupscore.end()&&count < 3; it++,count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					victory.push_back((*it).second);
				}
			}
			cout << endl;
			groupscore.clear();//清空
		}
	}
	cout << "第" << this->m_Index << "轮比赛完毕！" << endl;
	system("pause");
}

void speechManager::showscore()
{
	cout << "----------------------------------------" << endl;
	cout << "第" << this->m_Index << "轮晋级选手信息如下：" << endl;
	vector<int>v;
	if (this->m_Index == 1)
	{
		v = v2;
	}
	else
	{
		v = victory;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ID : " << *it << "\t";
		this->m_Speaker[*it].printspeaker(this->m_Index);
	}
	cout << endl;
	system("pause");
	system("cls");
	this->show_Menu();
}

void speechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);
	//写入选手数据
	for (vector<int>::iterator it = victory.begin(); it != victory.end(); it++)
	{
		this->m_Speaker[*it].saverecord(*it,ofs);
	}
	ofs << endl;
	ofs.close();
	cout << "数据已保存！" << endl;
	this->fileEmpty = true;
}


void speechManager::startMatch()
{
	//第一轮比赛
	//1、抽签
	this->chouqian();
	//2、开始演讲
	this->startspeech();
	//3、显示结果
	this->showscore();
	//第二轮比赛
	this->m_Index++;
	//1、抽签
	this->chouqian();
	//2、开始演讲
	this->startspeech();
	//3、显示比赛结果
	this->showscore();
	//将结果保存到文件
	this->saveRecord();
	cout << "本届比赛结束！" << endl;
	//重置系统
	//初始化属性
	this->initSpeech();
	//创建比赛人员
	this->create_speaker();
	//加载往届记录
	this->loadRecord();
	system("pause");
	system("cls");
}

void speechManager::loadRecord()
{
	ifstream ifs;
	ifs.open("speech.csv", ios::in);
	if (!ifs.is_open())
	{
		//cout << "文件不存在！" << endl;
		ifs.close();
		return;
	}
	//文件清空清空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空！" << endl;
		this->fileEmpty = false;
		ifs.close();
		return;
	}
	//文件不为空
	this->fileEmpty = true;
	ifs.putback(ch);//将上面读取的单个字符放回去
	string data;
	int index = 0;
	while (getline(ifs,data))
	{
		//cout << data << endl;
		vector<string>v;
		int pos = -1;//查到","位置的变量
		int start = 0;
		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				break;//没找到
			}
			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();	
// 	for (map<int, vector<string>>::iterator it 
// 		= m_Record.begin(); it != m_Record.end(); it++)
// 	{
// 		cout << it->first << "\t冠军编号：" << it->second[0] << "\t分数：" << it->second[1] << endl;
// 	}
}

void speechManager::showRecord()
{
	if (this->fileEmpty == false)
	{
		cout << "文件不存在，或记录为空！" << endl;
	}
	for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	{
		cout << "第" << it->first + 1 << "届比赛结果：" << endl;
		cout << "冠军编号：" << it->second.at(0) << "\t得分：" << it->second.at(1) << "\t"
			<< "亚军编号：" << it->second.at(2) << "\t得分：" << it->second.at(3) << "\t"
			<< "季军编号：" << it->second.at(4) << "\t得分：" << it->second.at(5) << endl;
	}
	system("pause");
	system("cls");
}

void speechManager::clearRecord()
{
	cout << "是否确定清空所有数据" << endl;
	cout << "1、是" << endl;
	cout << "2、否" << endl;
	int choice = 0;
	cin >> choice;
	if (choice == 1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();
		//初始化属性
		this->initSpeech();
		//创建比赛人员
		this->create_speaker();
		//加载往届记录
		this->loadRecord();
		cout << "清空成功！" << endl;
	}
	system("pause");
	system("cls");
}