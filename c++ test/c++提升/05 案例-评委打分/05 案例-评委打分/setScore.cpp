#include"setScore.h"
#include<deque>
#include<algorithm>

void setScore(vector<Person>& v)
{
	srand((unsigned int)time(NULL));//���������
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60-100
			d.push_back(score);
		}

		//����ȥ��ֵ
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();

		//ȡƽ��
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();
		it->setScore(avg);
	}
}