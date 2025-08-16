#include"Person.h"

Person::Person(string name,int score)
{
	this->m_name = name;
	this->m_score = score;
}

void Person::printPerson()
{
	cout << "ÐÕÃû£º" << this->m_name << "\t·ÖÊý£º" << this->m_score << endl;
}

void Person::setScore(int score)
{
	this->m_score = score;
}