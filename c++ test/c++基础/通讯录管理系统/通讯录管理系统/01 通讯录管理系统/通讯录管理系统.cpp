#include <iostream>
using namespace std;
#define max 1000

//ͨѶ¼��һ�����Լ�¼��]�ˡ�������Ϣ�Ĺ��ߡ�
// ϵͳ����Ҫʵ�ֵĹ������£�

// * �����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
// * ��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
// * ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
// * ������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
// * �޸���ϵ�ˣ��������������޸�ָ����ϵ��
// * �����ϵ�ˣ����ͨѶ¼��������Ϣ
// * �˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼



//1��ͨѶ¼�˵�
void showmeau()
{
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}

//2��ʵ�������ϵ�˹��ܣ���ϵ������Ϊ1000�ˣ���ϵ����Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ��
//2��1 ��������ͨѶ¼��ϵ��
struct person
{
	string name;
	int gender;
	int age;
	string num;
	string family;
};

struct address
{
	struct person per[max];
	int len;
};

void add(struct address * abs)
{
	if (abs->len >= max)//����ͨѶ¼�Ƿ����������ϵ�˵Ĳ���
	{
		cout << "ͨѶ¼�������޷���ӡ�" << endl;
	}
	else
	{
		//�������
		cout << "������������" << endl;
		string name;
		//cin >> abs->per->name;
		cin >> name;
		abs->per[abs->len].name = name;

		//����Ա�
		cout << "�������Ա�" << endl;
		cout << "1����" << endl;
		cout << "2��Ů" << endl;
		int gender;
		while (1)
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				abs->per[abs->len].gender = gender;
				break;//֪������Ϊ1��2���˳�������һֱѭ��
			}
			cout << "������������������";
		}

		cout << "���������䣺" << endl;
		int age;
		cin >> age;
		abs->per[abs->len].age = age;

		cout << "��������ϵ�绰��" << endl;
		string num;
		cin >> num;
		abs->per[abs->len].num = num;

		cout << "�������ͥסַ��" << endl;
		string family;
		cin >> family;
		abs->per[abs->len].family = family;
	}
	abs->len++;//������ϵ����
	cout << "��ӳɹ�" << endl;
	system("pause");//�밴���������
	system("cls");//��������
}

//3����ʾ��ϵ��
//������������ʾͨѶ¼�����е���ϵ����Ϣ
void print(struct address* abs)
{
	if (abs->len == 0)
	{
		cout << "��ǰ��ϵ��Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->len; i++)
		{
			cout << "������ " << abs->per[i].name << "\t" << "�Ա� " << (abs->per[i].gender == 1 ? "��" : "Ů") << "\t" << "���䣺 " << abs->per[i].age << "\t" << "��ϵ�绰�� " << abs->per[i].num << "\t" << "��ͥסַ�� " << abs->per[i].family << endl;
		}
	}
	system("pause");
	system("cls");
}

//4��ɾ����ϵ��
//����������������������ɾ��ָ����ϵ��
//ɾ����ϵ��ʵ�ֲ��裺* ��װ�����ϵ���Ƿ�� * ��װɾ����ϵ�˺��� * ����ɾ����ϵ�˹���
//4��1 �ж���ϵ���Ƿ���� ����i���ڣ�-1������
int jedgeperson(struct address* abs, string name)
{
	for (int i = 0; i < abs->len; i++)
	{
		if (name == abs->per[i].name)
		{
			return i;
		}
	}
	return -1;
}
	

//4��2 ɾ����ϵ��
void delectperson(struct address* abs)
{
	cout << "��������ϵ��������" << endl;
	string name;
	cin >> name;
	int i = jedgeperson(abs, name);

	if (i == -1)
	{
		cout << "��ϵ�˲�����" << endl;
	}
	else
	{
		for (int j = i; j < abs->len; j++)
		{
			abs->per[i] = abs->per[i + 1];
		}

		abs->len--;

		cout << "ɾ���ɹ�" << endl;
	}

	system("pause");

	system("cls");
}

//5��������ϵ��
//�������������������鿴ָ����ϵ����Ϣ  ������ϵ��ʵ�ֲ��� * ��װ������ϵ�˺��� * ���Բ���ָ����ϵ��
void findperson(struct address* abs)
{
	cout << "��������ϵ��������" << endl;
	string name;
	cin >> name;
	
	int i = jedgeperson(abs, name);

	if (i == -1)
	{
		cout << "��ϵ�˲�����" << endl;
	}
	else
	{
		cout << "������ " << abs->per[i].name << "\t" << "�Ա� " << (abs->per[i].gender == 1 ? "��" : "Ů") << "\t" << "���䣺 " << abs->per[i].age << "\t" << "��ϵ�绰�� " << abs->per[i].num << "\t" << "��ͥסַ�� " << abs->per[i].family << endl;
	}

	system("pause");

	system("cls");
}

//6���޸���ϵ��
//�����������������������޸�ָ����ϵ�� �޸���ϵ��ʵ�ֲ��� * ��װ�޸���ϵ�˺��� * �����޸���ϵ�˹���
int modifyperson(struct address* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ��������" << endl;
	string name;
	cin >> name;

	int i = jedgeperson(abs, name);

	if (i == -1)
	{
		cout << "��ϵ�˲�����" << endl;
	}
	else
	{
		cout << "������ " << abs->per[i].name << "\t" << "�Ա� " << (abs->per[i].gender == 1 ? "��" : "Ů") << "\t" << "���䣺 " << abs->per[i].age << "\t" << "��ϵ�绰�� " << abs->per[i].num << "\t" << "��ͥסַ�� " << abs->per[i].family << endl;
		cout << endl;
		cout << "������Ҫ�޸ĵ�����" << endl;
		cout << "1������ " << endl;
		cout << "2���Ա� " << endl;
		cout << "3������ " << endl;
		cout << "4����ϵ�绰 " << endl;
		cout << "5����ͥסַ " << endl;
		cout << "0���˳��޸� " << endl;

		while (1)
		{
			int select;

			cin >> select;

			switch (select)
			{
			case 1:
			{
				cout << "������������" << endl;
				string name;
				//cin >> abs->per->name;
				cin >> name;
				abs->per[i].name = name;
			};
			break;
			case 2:
			{
				cout << "�������Ա�" << endl;
				cout << "1����" << endl;
				cout << "2��Ů" << endl;
				int gender;
				while (1)
				{
					cin >> gender;
					if (gender == 1 || gender == 2)
					{
						abs->per[i].gender = gender;
						break;//֪������Ϊ1��2���˳�������һֱѭ��
					}
					cout << "������������������" << endl;
				}
			};
			break;
			case 3:
			{
				cout << "���������䣺" << endl;
				int age;
				cin >> age;
				abs->per[i].age = age;
			};
			break;
			case 4:
			{
				cout << "��������ϵ�绰��" << endl;
				string num;
				cin >> num;
				abs->per[i].num = num;
			};
			break;
			case 5:
			{
				cout << "�������ͥסַ��" << endl;
				string family;
				cin >> family;
				abs->per[i].family = family;
			};
			case 0:
			{
				cout << "�޸ĳɹ�" << endl;
				system("pause");
				system("cls");
				return 0;
				break;
			}
			break;
			default:
				break;
			}
		}
	}

	system("pause");

	system("cls");
}

//7�������ϵ��
//�������������ͨѶ¼��������Ϣ �����ϵ��ʵ�ֲ��� * ��װ�����ϵ�˺��� * ���������ϵ��
//ʵ��˼·�� ��ͨѶ¼������ϵ����Ϣ�������ֻҪ��ͨѶ¼��¼����ϵ��������Ϊ0�����߼���ռ��ɡ�
void clearperson(struct address* abs)
{
	abs->len = 0;//����ǰ��¼����ϵ����Ϊ0�����߼��������
	cout << "ͨѶ¼�����" << endl;

	system("pause");

	system("cls");
}

int main()
{
	int select = 0;

	struct person per;//����ṹ����ϵ�˱���

	struct address abs;//����ͨѶ¼����

	abs.len = 0;

	while (1)
	{
		showmeau();

		//����ͨѶ¼������һ�����߹ر�;
	
		cin >> select;

		switch (select)
		{
		case 1:add(&abs);//�����ϵ��//���õ�ַ���ݣ��ſ��������޸�ʵ��
			break;
		case 2:print(&abs);//��ʾ��ϵ��
			break;
		case 3:delectperson(&abs);//ɾ����ϵ��
			break;
		case 4:findperson(&abs);//������ϵ��
			break;
		case 5:modifyperson(&abs);//�޸���ϵ��
			break;
		case 6:clearperson(&abs);//�����ϵ��
			break;
		case 0:cout << "��ӭ�´�ʹ��" << endl;//�˳�ͨѶ¼
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");

	return 0;
}