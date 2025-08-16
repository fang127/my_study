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
	//�˵�����
	void show_Menu();
	//�˳�ϵͳ
	void exitSystem();
	//��ʼ������������
	void initSpeech();
	//����ѡ��
	void create_speaker();
	//��ʼ��������
	void startMatch();
	//��ǩ
	void chouqian();
	//��ʼ�ݽ�
	void startspeech();
	//��ʾ���
	void showscore();
	//�������
	void saveRecord();
	//��ȡ��¼
	void loadRecord();
	//չʾ��¼
	void showRecord();
	//��ռ�¼
	void clearRecord();

	//����ѡ�� 12�� ��һ��
	vector<int>v1;
	//��һ�ֽ�����
	vector<int>v2;
	//ʤ����ǰ����
	vector<int>victory;
	//map���ѡ�ּ����
	map<int, Speaker>m_Speaker;
	//��¼��������
	int m_Index;
	//�����¼����
	map<int, vector<string>>m_Record;
	//�ж��ļ��Ƿ�Ϊ��
	bool fileEmpty;
};
