#include <iostream>
using namespace std;
#define max 1000

//通讯录是一个可以记录亲]人、好友信息的工具。
// 系统中需要实现的功能如下：

// * 添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
// * 显示联系人：显示通讯录中所有联系人信息
// * 删除联系人：按照姓名进行删除指定联系人
// * 查找联系人：按照姓名查看指定联系人信息
// * 修改联系人：按照姓名重新修改指定联系人
// * 清空联系人：清空通讯录中所有信息
// * 退出通讯录：退出当前使用的通讯录



//1、通讯录菜单
void showmeau()
{
	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通讯录 *****" << endl;
	cout << "*************************" << endl;
}

//2、实现添加联系人功能，联系人上限为1000人，联系人信息包括（姓名、性别、年龄、联系电话、家庭住址）
//2、1 创建数组通讯录联系人
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
	if (abs->len >= max)//先判通讯录是否允许添加联系人的操作
	{
		cout << "通讯录已满，无法添加。" << endl;
	}
	else
	{
		//添加姓名
		cout << "请输入姓名：" << endl;
		string name;
		//cin >> abs->per->name;
		cin >> name;
		abs->per[abs->len].name = name;

		//添加性别
		cout << "请输入性别：" << endl;
		cout << "1、男" << endl;
		cout << "2、女" << endl;
		int gender;
		while (1)
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				abs->per[abs->len].gender = gender;
				break;//知道输入为1或2才退出，否则一直循环
			}
			cout << "输入有误，请重新输入";
		}

		cout << "请输入年龄：" << endl;
		int age;
		cin >> age;
		abs->per[abs->len].age = age;

		cout << "请输入联系电话：" << endl;
		string num;
		cin >> num;
		abs->per[abs->len].num = num;

		cout << "请输入家庭住址：" << endl;
		string family;
		cin >> family;
		abs->per[abs->len].family = family;
	}
	abs->len++;//更新联系人数
	cout << "添加成功" << endl;
	system("pause");//请按任意键继续
	system("cls");//清屏操作
}

//3、显示联系人
//功能描述：显示通讯录中已有的联系人信息
void print(struct address* abs)
{
	if (abs->len == 0)
	{
		cout << "当前联系人为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->len; i++)
		{
			cout << "姓名： " << abs->per[i].name << "\t" << "性别： " << (abs->per[i].gender == 1 ? "男" : "女") << "\t" << "年龄： " << abs->per[i].age << "\t" << "联系电话： " << abs->per[i].num << "\t" << "家庭住址： " << abs->per[i].family << endl;
		}
	}
	system("pause");
	system("cls");
}

//4、删除联系人
//功能描述：按照姓名进行删除指定联系人
//删除联系人实现步骤：* 封装检测联系人是否存 * 封装删除联系人函数 * 测试删除联系人功能
//4、1 判断联系人是否存在 返回i存在，-1不存在
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
	

//4、2 删除联系人
void delectperson(struct address* abs)
{
	cout << "请输入联系人姓名：" << endl;
	string name;
	cin >> name;
	int i = jedgeperson(abs, name);

	if (i == -1)
	{
		cout << "联系人不存在" << endl;
	}
	else
	{
		for (int j = i; j < abs->len; j++)
		{
			abs->per[i] = abs->per[i + 1];
		}

		abs->len--;

		cout << "删除成功" << endl;
	}

	system("pause");

	system("cls");
}

//5、查找联系人
//功能描述：按照姓名查看指定联系人信息  查找联系人实现步骤 * 封装查找联系人函数 * 测试查找指定联系人
void findperson(struct address* abs)
{
	cout << "请输入联系人姓名：" << endl;
	string name;
	cin >> name;
	
	int i = jedgeperson(abs, name);

	if (i == -1)
	{
		cout << "联系人不存在" << endl;
	}
	else
	{
		cout << "姓名： " << abs->per[i].name << "\t" << "性别： " << (abs->per[i].gender == 1 ? "男" : "女") << "\t" << "年龄： " << abs->per[i].age << "\t" << "联系电话： " << abs->per[i].num << "\t" << "家庭住址： " << abs->per[i].family << endl;
	}

	system("pause");

	system("cls");
}

//6、修改联系人
//功能描述：按照姓名重新修改指定联系人 修改联系人实现步骤 * 封装修改联系人函数 * 测试修改联系人功能
int modifyperson(struct address* abs)
{
	cout << "请输入要修改的联系人姓名：" << endl;
	string name;
	cin >> name;

	int i = jedgeperson(abs, name);

	if (i == -1)
	{
		cout << "联系人不存在" << endl;
	}
	else
	{
		cout << "姓名： " << abs->per[i].name << "\t" << "性别： " << (abs->per[i].gender == 1 ? "男" : "女") << "\t" << "年龄： " << abs->per[i].age << "\t" << "联系电话： " << abs->per[i].num << "\t" << "家庭住址： " << abs->per[i].family << endl;
		cout << endl;
		cout << "请输入要修改的内容" << endl;
		cout << "1、姓名 " << endl;
		cout << "2、性别 " << endl;
		cout << "3、年龄 " << endl;
		cout << "4、联系电话 " << endl;
		cout << "5、家庭住址 " << endl;
		cout << "0、退出修改 " << endl;

		while (1)
		{
			int select;

			cin >> select;

			switch (select)
			{
			case 1:
			{
				cout << "请输入姓名：" << endl;
				string name;
				//cin >> abs->per->name;
				cin >> name;
				abs->per[i].name = name;
			};
			break;
			case 2:
			{
				cout << "请输入性别：" << endl;
				cout << "1、男" << endl;
				cout << "2、女" << endl;
				int gender;
				while (1)
				{
					cin >> gender;
					if (gender == 1 || gender == 2)
					{
						abs->per[i].gender = gender;
						break;//知道输入为1或2才退出，否则一直循环
					}
					cout << "输入有误，请重新输入" << endl;
				}
			};
			break;
			case 3:
			{
				cout << "请输入年龄：" << endl;
				int age;
				cin >> age;
				abs->per[i].age = age;
			};
			break;
			case 4:
			{
				cout << "请输入联系电话：" << endl;
				string num;
				cin >> num;
				abs->per[i].num = num;
			};
			break;
			case 5:
			{
				cout << "请输入家庭住址：" << endl;
				string family;
				cin >> family;
				abs->per[i].family = family;
			};
			case 0:
			{
				cout << "修改成功" << endl;
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

//7、清空联系人
//功能描述：清空通讯录中所有信息 清空联系人实现步骤 * 封装清空联系人函数 * 测试清空联系人
//实现思路： 将通讯录所有联系人信息清除掉，只要将通讯录记录的联系人数量置为0，做逻辑清空即可。
void clearperson(struct address* abs)
{
	abs->len = 0;//将当前记录的联系人数为0，做逻辑情况操作
	cout << "通讯录已清空" << endl;

	system("pause");

	system("cls");
}

int main()
{
	int select = 0;

	struct person per;//定义结构体联系人变量

	struct address abs;//定义通讯录变量

	abs.len = 0;

	while (1)
	{
		showmeau();

		//操作通讯录进行下一步或者关闭;
	
		cin >> select;

		switch (select)
		{
		case 1:add(&abs);//添加联系人//利用地址传递，才可以真正修改实参
			break;
		case 2:print(&abs);//显示联系人
			break;
		case 3:delectperson(&abs);//删除联系人
			break;
		case 4:findperson(&abs);//查找联系人
			break;
		case 5:modifyperson(&abs);//修改联系人
			break;
		case 6:clearperson(&abs);//清空联系人
			break;
		case 0:cout << "欢迎下次使用" << endl;//退出通讯录
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