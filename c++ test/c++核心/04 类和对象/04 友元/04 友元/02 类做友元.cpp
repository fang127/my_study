// #include<iostream>
// using namespace std;
// 
// //������Ԫ
// class Building
// {
// 	//GoodGay�Ǳ�������ѣ����Է��ʱ���˽�г�Ա
// 	friend class GoodGay;
// 
// public:
// 
// 	Building();
// 
// public:
// 
// 	string m_SittingRoom;
// 
// private:
// 	string m_BedRoom;
// };
// 
// //��������Ա����
// Building::Building()
// {
// 
// 	m_SittingRoom = "����";
// 
// 	m_BedRoom = "����";
// }
// 
// class GoodGay
// {
// public:
// 
// 	GoodGay();
// 
// 	void visit();//�ιۺ��� ����Building�е�����
// 
// public:
// 	Building* building;
// };
// 
// GoodGay::GoodGay()
// {
// 	//�������������
// 	building = new Building;
// }
// 
// void GoodGay::visit()
// {
// 	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;
// 	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
// }
// 
// void test01()
// {
// 	GoodGay gay;
// 	gay.visit();
// 
// }
// 
// int main()
// {
// 	test01();
// 
// 	system("pause");
// 
// 	return 0;
// }