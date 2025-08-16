#include"speechManager.h"

speechManager::speechManager()
{
	//��ʼ������
	this->initSpeech();
	//����������Ա
	this->create_speaker();
	//���������¼
	this->loadRecord();
}

speechManager::~speechManager()
{

}

void speechManager::show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*************  ��ӭ�μ��ݽ����� ************" << endl;
	cout << "*************  1.��ʼ�ݽ�����  *************" << endl;
	cout << "*************  2.�鿴�����¼  *************" << endl;
	cout << "*************  3.��ձ�����¼  *************" << endl;
	cout << "*************  0.�˳���������  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void speechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
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
		string name = "ѡ��";
		name += seedName[i];
		double score[2];
		for (int j = 0; j < 2; j++)
		{
			score[j] = 0;
		}
		Speaker p(name, score);
		//����ѡ�ֱ�ţ�����v1����
		this->v1.push_back(i + 10001);
		//ѡ�ֱ���Լ�ѡ�ַ���map
		this->m_Speaker.insert(make_pair(i + 10001, p));
	}
} 

void speechManager::chouqian()
{
	cout << "��" << this->m_Index << "�ֱ�����ʼ��ǩ��" << endl;
	cout << "----------------------------------------" << endl;
	cout << "��ǩ���ݽ�˳�����£�" << endl;
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
	cout << "��" << this->m_Index << "�ֱ�����ʽ��ʼ��" << endl;
	cout << "----------------------------------------" << endl;
	//׼����ʱ���������С��ɼ�
	multimap<double, int, greater<double>>groupscore;
	//��¼��Ա���� 6��һ��
	int num = 0;
	vector<int>v;//����ѡ������
	if (this->m_Index == 1)
	{
		v = v1;
	}
	else
	{
		v = v2;
	}

	//��������ѡ�ֽ��б���
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		num++;
		//��ί���
		deque<double>d;
		for(int i = 0;i < 10;i++)
		{
			double score = (rand() % 401 + 600) / 10.f; //60-100
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;
		sort(d.begin(), d.end(), greater<double>());//����
		d.pop_front();//ȥ����߷ֺ���ͷ�
		d.pop_back();
		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();//ƽ����
		//ƽ���ַ���map������
		this->m_Speaker[*it].avgscore(avg,this->m_Index);
		//��ӡƽ���� ����
// 		cout << "ID : " << * it << "\t";
// 		this->m_Speaker[*it].printspeaker(this->m_Index);
		//��������ݷ�����ʱС��������
		groupscore.insert(make_pair(avg, *it));//key�ǵ÷֣�valueΪѡ�ֱ�ţ����÷�����
		//ÿ����ȡǰ����
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С�����������" << endl;
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
			groupscore.clear();//���
		}
	}
	cout << "��" << this->m_Index << "�ֱ�����ϣ�" << endl;
	system("pause");
}

void speechManager::showscore()
{
	cout << "----------------------------------------" << endl;
	cout << "��" << this->m_Index << "�ֽ���ѡ����Ϣ���£�" << endl;
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
	//д��ѡ������
	for (vector<int>::iterator it = victory.begin(); it != victory.end(); it++)
	{
		this->m_Speaker[*it].saverecord(*it,ofs);
	}
	ofs << endl;
	ofs.close();
	cout << "�����ѱ��棡" << endl;
	this->fileEmpty = true;
}


void speechManager::startMatch()
{
	//��һ�ֱ���
	//1����ǩ
	this->chouqian();
	//2����ʼ�ݽ�
	this->startspeech();
	//3����ʾ���
	this->showscore();
	//�ڶ��ֱ���
	this->m_Index++;
	//1����ǩ
	this->chouqian();
	//2����ʼ�ݽ�
	this->startspeech();
	//3����ʾ�������
	this->showscore();
	//��������浽�ļ�
	this->saveRecord();
	cout << "�������������" << endl;
	//����ϵͳ
	//��ʼ������
	this->initSpeech();
	//����������Ա
	this->create_speaker();
	//���������¼
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
		//cout << "�ļ������ڣ�" << endl;
		ifs.close();
		return;
	}
	//�ļ�������
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ�գ�" << endl;
		this->fileEmpty = false;
		ifs.close();
		return;
	}
	//�ļ���Ϊ��
	this->fileEmpty = true;
	ifs.putback(ch);//�������ȡ�ĵ����ַ��Ż�ȥ
	string data;
	int index = 0;
	while (getline(ifs,data))
	{
		//cout << data << endl;
		vector<string>v;
		int pos = -1;//�鵽","λ�õı���
		int start = 0;
		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				break;//û�ҵ�
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
// 		cout << it->first << "\t�ھ���ţ�" << it->second[0] << "\t������" << it->second[1] << endl;
// 	}
}

void speechManager::showRecord()
{
	if (this->fileEmpty == false)
	{
		cout << "�ļ������ڣ����¼Ϊ�գ�" << endl;
	}
	for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	{
		cout << "��" << it->first + 1 << "����������" << endl;
		cout << "�ھ���ţ�" << it->second.at(0) << "\t�÷֣�" << it->second.at(1) << "\t"
			<< "�Ǿ���ţ�" << it->second.at(2) << "\t�÷֣�" << it->second.at(3) << "\t"
			<< "������ţ�" << it->second.at(4) << "\t�÷֣�" << it->second.at(5) << endl;
	}
	system("pause");
	system("cls");
}

void speechManager::clearRecord()
{
	cout << "�Ƿ�ȷ�������������" << endl;
	cout << "1����" << endl;
	cout << "2����" << endl;
	int choice = 0;
	cin >> choice;
	if (choice == 1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();
		//��ʼ������
		this->initSpeech();
		//����������Ա
		this->create_speaker();
		//���������¼
		this->loadRecord();
		cout << "��ճɹ���" << endl;
	}
	system("pause");
	system("cls");
}