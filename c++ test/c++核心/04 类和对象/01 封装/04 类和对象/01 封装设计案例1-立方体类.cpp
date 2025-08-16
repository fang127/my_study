// #include <iostream>
// using namespace std;
// 
// //设计立方体类
// //求出立方体的面积和体积
// //分别用全局函数和成员函数判断两个立方体是否相等
// 
// class Cube
// {
// private://定义属性 私有
// 	int m_L;
// 	int m_W;
// 	int m_H;
// public://行为 公共
// 	//计算面积
// 	int getsqa()
// 	{
// 		return 2 * m_L * m_H + 2 * m_L * m_W + 2 * m_W * m_H;
// 	}
// 	//计算体积
// 	int getVol()
// 	{
// 		return m_L * m_H * m_W;
// 	}
// 	//设置高
// 	void setm_H(int h)
// 	{
// 		m_H = h;
// 	}
// 	//获取高
// 	int getm_H()
// 	{
// 		return m_H;
// 	}
// 	//设置长
// 	void setm_L(int l)
// 	{
// 		m_L = l;
// 	}
// 	//获取长
// 	int getm_L()
// 	{
// 		return m_L;
// 	}
// 	//设置宽
// 	void setm_W(int w)
// 	{
// 		m_W = w;
// 	}
// 	//获取宽
// 	int getm_W()
// 	{
// 		return m_W;
// 	}
// 	//利用成员函数判断两个立方体是否相等
// 	bool judgesamebyclass(Cube& c2)
// 	{
// 		if (m_H == c2.getm_H() && m_L == c2.getm_L() && m_W == c2.getm_W())
// 		{
// 			return true;
// 		}
// 		return false;
// 	}
// };
// 
// //利用全局函数判断 两个立方体是否相等
// bool judgesame(Cube& c1, Cube& c2)
// {
// 	if (c1.getm_H() == c2.getm_H() && c1.getm_L() == c2.getm_L() && c1.getm_W() == c2.getm_W())
// 	{
// 		return true;
// 	}
// 	return false;
// }
// 
// int main()
// {
// 	//实例化
// 	Cube c1;
// 	c1.setm_L(10);
// 	c1.setm_H(10);
// 	c1.setm_W(10);
// 
// 	cout << "c1的面积为：" << c1.getsqa() << endl;
// 	cout << "c1的体积为：" << c1.getVol() << endl;
// 
// 	Cube c2;
// 	c2.setm_H(10);
// 	c2.setm_L(10);
// 	c2.setm_W(10);
// 
// 	bool ret = judgesame(c1, c2);
// 
// 	if (ret)
// 	{
// 		cout << "全局函数 c1和c2是相等的" << endl;
// 	}
// 	else
// 	{
// 		cout << "全局函数 c1和c2是不相等的" << endl;
// 	}
// 
// 	bool ret1 = c1.judgesamebyclass(c2);
// 	if (ret1)
// 	{
// 		cout << "成员函数 c1和c2是相等的" << endl;
// 	}
// 	else
// 	{
// 		cout << "成员函数 c1和c2是不相等的" << endl;
// 	}
// 
// 	system("pause");
// 
// 	return 0;
// }