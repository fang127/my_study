#include"WorkerManager.h"
#include"Employee.h"
#include"Boss.h"
#include"Manager.h"

WorkerManager::WorkerManager()
{
	//cout << "WorkerManager�Ĺ��캯��" << endl;

	//��ʼ���������
	//1���ļ�������
	ifstream ifs;
	ifs.open("FILENAME", ios::in);
	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;//���Դ���
		//��ʼ������
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();//�ر��ļ�
		return;
	}

	//2���ļ����ڵ�����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ�գ�" << endl;//���Դ���
		//��ʼ������
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();//�ر��ļ�
		return;
	}

	//3���ļ����ڣ�����������
	int num = this->get_EmpNum();
	//cout << "ְ������Ϊ��" << num << endl;//���Դ���
	this->m_EmpNum = num;
	this->m_FileIsEmpty = false;

	this->m_EmpArray = new Worker * [this->m_EmpNum];//���ٿռ�
	this->init_Emp();//���ļ������ݴ���������

	//���Դ���
// 	for (int i = 0; i < m_EmpNum; i++)
// 	{
// 		cout << "ְ����ţ�" << this->m_EmpArray[i]->m_id
// 			 << "\tְ��������" << this->m_EmpArray[i]->m_name
// 			 << "\t��λ��" << this->m_EmpArray[i]->getDid() << endl; 
// 	}
}

WorkerManager::~WorkerManager()
{
	//cout << "WorkerManager����������" << endl;
	if (this->m_EmpArray != NULL)
	{
		//ɾ������ÿ��ְ������
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			delete this->m_EmpArray[i];
			this->m_EmpArray[i] = NULL;
		}

		//ɾ����������ָ��
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

//չʾ�˵�
void WorkerManager::Show_Menu()
{
	cout << "************************************" << endl;
	cout << "******* ��ӭ����ְ������ϵͳ *******" << endl;
	cout << "********** 0.�˳�����ϵͳ **********" << endl;
	cout << "********** 1.����ְ����Ϣ **********" << endl;
	cout << "********** 2.��ʾְ����Ϣ **********" << endl;
	cout << "********** 3.ɾ����ְְ�� **********" << endl;
	cout << "********** 4.�޸�ְ����Ϣ **********" << endl;
	cout << "********** 5.����ְ����Ϣ **********" << endl;
	cout << "********** 6.���ձ������ **********" << endl;
	cout << "********** 7.��������ĵ� **********" << endl;
	cout << endl;
}

//�˳�ϵͳ
void WorkerManager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);//�˳�������
}

//���ְ��
void WorkerManager::Add_Emp()
{
	cout << "��������Ҫ���ְ��������" << endl;

	int addnum = 0;
	cin >> addnum;

	if (addnum > 0)
	{
		//���
		//��������¿ռ��С
		int newsize = this->m_EmpNum + addnum;//�¿ռ��С=ԭ����+��������

		//�����¿ռ�
		Worker** newspace = new Worker * [newsize];

		//��ԭ�ռ��µ����ݿ������¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0;i < this->m_EmpNum;i++)
			{
				newspace[i] = this->m_EmpArray[i];
			}
		}

		//�������������
		for (int i = 0; i < addnum; i++)
		{
			int id;
			string name;
			int did;

			cout << "�������" << i + 1 << "����ְ����ţ�" << endl;
			cin >> id;

			int ret = this->Isexist(id);//�����id�Ƿ�����

			do 
			{
				if (ret != -1)
				{
					cout << "ְ������ظ������������룡" << endl;
					cin >> id;
					ret = this->Isexist(id);
				}
			} 
			while (ret != -1);//��û���ظ�����

			cout << "�������" << i + 1 << "����ְ��������" << endl;
			cin >> name;

			cout << "�������" << i + 1 << "����ְ����λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> did;

			Worker* worker = NULL;
			switch (did)
			{
			case 1:
				worker = new Employee(id, name, did);
				break;

			case 2:
				worker = new Manager(id, name, did);
				break;

			case 3:
				worker = new Boss(id, name, did);
				break;

			default:
				break;
			}
			//��������ְ��ָ�룬���浽������
			newspace[this->m_EmpNum + i] = worker;
		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newspace;

		//������ְ������
		this->m_EmpNum = newsize;

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addnum << "����ְ����" << endl;

		//��������
		this->save();
	}
	else
	{
		cout << "������������" << endl;
	}

	system("pause");

	system("cls");
}

//�����ļ�
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open("FILENAME", ios::out);//��д�ķ�ʽ��

	//��ÿ���˵�����д���ļ���
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_id
			<< "\t" << this->m_EmpArray[i]->m_name
			<< "\t" << this->m_EmpArray[i]->m_did << endl;
	}

	//�ر��ļ�
	ofs.close();
}

//ͳ���ļ�������
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open("FILENAME", ios::in);

	int id;
	string name;
	int did;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		//ͳ������
		num++;
	}

	return num;
}

//��ʼ��Ա��
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open("FILENAME", ios::in);

	int id;
	string name;
	int did;

	int index = 0;

	while (ifs >> id && ifs >> name && ifs >> did)
	{
		Worker* worker = NULL;
		if (did == 1)//��ͨԱ��
		{
			worker = new Employee(id, name, did);
		}
		else if (did == 2)//����
		{
			worker = new Manager(id, name, did);
		}
		else //�ϰ�
		{
			worker = new Boss(id, name, did);
		}

		this->m_EmpArray[index] = worker;

		index++;
	}

	//�ر��ļ�
	ifs.close();
}

//��ʾְ��
void WorkerManager::show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_EmpNum <= 0)
	{
		cout << "ϵͳ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			//���ö�̬���ó���ӿ�
			this->m_EmpArray[i]->showInfo();
		}
	}

	system("pause");
	system("cls");
}

//ɾ��ְ��
void WorkerManager::Del_Emp()
{
	if (this->m_EmpNum <= 0)
	{
		cout << "ϵͳ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��������Ҫɾ����ְ����ţ�" << endl;
		int id = 0;
		cin >> id;
		int index = this->Isexist(id);
		if (index != -1)//˵��ְ�����ڣ�����Ҫɾ��indexλ���ϵ�ְ��
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				//delete this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];//����ǰ��
			}
			this->m_EmpNum--;//���������м�¼����
			//����ͬ�����µ��ļ���
			this->save();
			cout << "ɾ���ɹ���" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}

	system("pause");
	system("cls");
}

//�ж�ְ���Ƿ����
int WorkerManager::Isexist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_id == id)
		{
			//cout << "����" << endl;
			index = i;
			break;
		}
	}

	return index;
}

//�޸�ְ��
void  WorkerManager::Mod_Emp()
{
	if (this->m_EmpNum <= 0)
	{
		cout << "��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "������Ҫ�޸ĵ�ְ�����" << endl;
		int id;
		cin >> id;

		int ret = this->Isexist(id);

		if (ret != -1)
		{
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newname = "";
			int newdid = 0;

			cout << "�鵽��" << id << "��ְ��,��������ְ���ţ�" << endl;
			cin >> newId;

			cout << "��������������" << endl;
			cin >> newname;

			cout << "�������λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ܲ�" << endl;
			cin >> newdid;

			Worker* worker = NULL;
			switch (newdid)
			{
			case 1:
				worker = new Employee(newId, newname, newdid);
				break;
			case 2:
				worker = new Manager(newId, newname, newdid);
				break;
			case 3:
				worker = new Boss(newId, newname, newdid);
				break;
			}

			//�������ݱ���������
			this->m_EmpArray[ret] = worker;

			cout << "�޸ĳɹ���" << endl;

			//�����ļ�
			this->save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴���" << endl;
		}
	}
	system("pause");
	system("cls");
}

//����ְ�� ���ַ��� ��������
void WorkerManager::Find_Emp()
{
	if (this->m_EmpNum <= 0)
	{
		cout << "��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1����ְ����Ų���" << endl;
		cout << "2����ְ����������" << endl;
		int select = 0;
		cin >> select;

		if (select == 1)
		{
			//����Ų�
			int id;
			cout << "��������ҵ�ְ����ţ�" << endl;
			cin >> id;

			int ret = this->Isexist(id);

			if (ret != -1)
			{
				//�ҵ�ְ��
				cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else if (select == 2)
		{
			//��������
			string name;
			cout << "��������ҵ�ְ��������" << endl;
			cin >> name;

			//�����ж��Ƿ�鵽�ı�־
			bool flag = false;//Ĭ��δ�ҵ�

			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_name == name)
				{
					cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
					this->m_EmpArray[i]->showInfo();

					flag = true;
				}
			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else 
		{
			cout << "��������" << endl;
		}
	}
	system("pause");
	system("cls");
}

//����ְ��
void WorkerManager::Sort_Emp()
{
	//��װְ���������
	if (this->m_EmpNum <= 0)
	{
		cout << "��¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1����ְ����Ž�������" << endl;
		cout << "2����ְ����Ž��н���" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int minOrmax = i;//������Сֵ�����ֵ�±�
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1)//����
				{
					if (this->m_EmpArray[minOrmax]->m_id > this->m_EmpArray[j]->m_id)
					{
						minOrmax = j;
					}
				}
				else//����
				{
					if (this->m_EmpArray[minOrmax]->m_id < this->m_EmpArray[j]->m_id)
					{
						minOrmax = j;
					}
				}
			}
			//�ж�һ��ʼ�϶�����Сֵ�������ֵ�ǲ��Ǽ������С�����ֵ��������ǣ���������
			if (i != minOrmax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrmax];
				this->m_EmpArray[minOrmax] = temp;
			}
		}
		cout << "����ɹ��������Ľ��Ϊ��" << endl;
		this->save();
		this->show_Emp();
	}
}

//�������
void WorkerManager::Clean_File()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)//���
	{
		ofstream ofs("FILENAME", ios::trunc);//ɾ���ļ������´���
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			//ɾ������ÿ��ְ������
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}

			//ɾ����������ָ��
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "��ճɹ�" << endl;
	}

	system("pause");
	system("cls");
}