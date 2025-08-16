#pragma once
#include<iostream>
using namespace std;
#include<fstream>

class Speaker
{
public:
	Speaker();
	Speaker(string name,double score[]);
	void printspeaker(int index);
	void avgscore(double m_Score,int index);
	void saverecord(int ID,ofstream &ofs);
private:
	string m_Name;
	double m_Score[2];
};
