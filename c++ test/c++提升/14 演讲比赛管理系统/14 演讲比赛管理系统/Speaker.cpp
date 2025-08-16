#include"Speaker.h"

Speaker::Speaker() {};

Speaker::Speaker(string name, double score[] )
{
	this->m_Name = name;
	for (int i = 0; i < 2; i++)
	{
		this->m_Score[i] = score[i];
	}
}

//打印
void Speaker::printspeaker(int index)
{
	cout << "name : " << m_Name << "\tscore : ";
	cout << m_Score[index - 1] << "\t";
	cout << endl;
}

void Speaker::avgscore(double Score,int index)
{
	this->m_Score[index - 1] = Score;
}

void Speaker::saverecord(int ID,ofstream &ofs)//fstream没有拷贝函数，所以必须要在形参加&
{
	
	ofs << ID << "," << m_Score[1] << "," ;
}