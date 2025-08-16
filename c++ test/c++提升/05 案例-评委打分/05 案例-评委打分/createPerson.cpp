#include"Person.h"
#include<vector>
#include"createPerson.h"


void createPerson(vector<Person>&v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "Ñ¡ÊÖ";
		name += nameSeed[i];
		int score = 0;

		Person p(name, score);
		v.push_back(p);
	}
}