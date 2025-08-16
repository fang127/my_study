#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include"Speaker.h"
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<fstream>
#include<string>

class speechManager
{
public:
	speechManager();
	~speechManager();
	//菜单功能
	void show_Menu();
	//退出系统
	void exitSystem();
	//初始化容器和属性
	void initSpeech();
	//创建选手
	void create_speaker();
	//开始比赛函数
	void startMatch();
	//抽签
	void chouqian();
	//开始演讲
	void startspeech();
	//显示结果
	void showscore();
	//保存分数
	void saveRecord();
	//读取记录
	void loadRecord();
	//展示记录
	void showRecord();
	//清空记录
	void clearRecord();

	//比赛选手 12人 第一轮
	vector<int>v1;
	//第一轮晋级者
	vector<int>v2;
	//胜利者前三名
	vector<int>victory;
	//map存放选手及编号
	map<int, Speaker>m_Speaker;
	//记录比赛轮数
	int m_Index;
	//往届记录容器
	map<int, vector<string>>m_Record;
	//判断文件是否为空
	bool fileEmpty;
};
