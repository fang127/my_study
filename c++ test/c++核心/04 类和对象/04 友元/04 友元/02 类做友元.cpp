// #include<iostream>
// using namespace std;
// 
// //类做友元
// class Building
// {
// 	//GoodGay是本类好朋友，可以访问本类私有成员
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
// //类外做成员函数
// Building::Building()
// {
// 
// 	m_SittingRoom = "客厅";
// 
// 	m_BedRoom = "卧室";
// }
// 
// class GoodGay
// {
// public:
// 
// 	GoodGay();
// 
// 	void visit();//参观函数 访问Building中的属性
// 
// public:
// 	Building* building;
// };
// 
// GoodGay::GoodGay()
// {
// 	//创建建筑物对象
// 	building = new Building;
// }
// 
// void GoodGay::visit()
// {
// 	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;
// 	cout << "好基友类正在访问：" << building->m_BedRoom << endl;
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