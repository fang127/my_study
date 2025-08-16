#pragma once
#include<iostream>
using namespace std;

class Person
{
public:
	Person(string name, int score);
	void printPerson();
	void setScore(int score);
private:
	string m_name;
	int m_score;//Æ½¾ù·Ö
};
