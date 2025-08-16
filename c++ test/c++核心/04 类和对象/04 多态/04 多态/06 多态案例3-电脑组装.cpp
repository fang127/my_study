#include<iostream>
using namespace std;

//案例3 **案例描述：**
//电脑主要组成部件为 CPU（用于计算），显卡（用于显示），内存条（用于存储）
//将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商
//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口测试时组装三台不同的电脑进行工作

//不同零件
//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void Calculator() = 0;
};

//抽象显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};

//抽象内存条类
class Memory
{
public:
	//抽象的储存函数
	virtual void storage() = 0;
};

//电脑类
class Computer
{
public:

	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//提供工作函数
	void work()
	{
		m_cpu->Calculator();
		m_vc->display();
		m_mem->storage();
	}

	//提供析构函数 释放3个电脑零件
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:

	CPU* m_cpu;//CPU的零件指针

	VideoCard* m_vc;//显卡的零件指针

	Memory* m_mem;//内存条的零件指针
};

//具体厂商
//intel
class IntelCPU : public CPU
{
public:

	virtual void Calculator()
	{
		cout << "Intel的CPU开始计算了" << endl;
	}
};

class IntelVideoCard : public VideoCard
{
public:

	virtual void display()
	{
		cout << "Intel的显卡开始显示了" << endl;
	}
};

class IntelMemory : public Memory
{
public:

	virtual void storage()
	{
		cout << "Intel的内存条开始存储了" << endl;
	}
};

//Lenovo
class LenovoCPU : public CPU
{
public:

	virtual void Calculator()
	{
		cout << "Lenovo的CPU开始计算了" << endl;
	}
};

class LenovoVideoCard : public VideoCard
{
public:

	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了" << endl;
	}
};

class LenovoMemory : public Memory
{
public:

	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了" << endl;
	}
};

void test01()
{
	//第一台电脑零件
	//父类指针指向子类
	CPU* intelcpu = new IntelCPU;
	VideoCard* intelvideocard = new IntelVideoCard;
	Memory* intelmemory = new IntelMemory;

	cout << "第一台电脑开始工作：" << endl;
	//创建第一台电脑
	Computer* computer1 = new Computer(intelcpu, intelvideocard, intelmemory);
	computer1->work();
	delete computer1;//利用电脑的析构释放创建的三个堆区的零件，或者在下面delete
// 	delete intelcpu;
// 	delete intelvideocard;
// 	delete intelmemory;

	cout << "-------------------------" << endl;
	cout << "第二台电脑开始工作：" << endl;
	//第二电脑的组装
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "-------------------------" << endl;
	cout << "第三台电脑开始工作：" << endl;
	//第二电脑的组装
	Computer* computer3 = new Computer(new IntelCPU, new LenovoVideoCard, new IntelMemory);
	computer3->work();
	delete computer3;
}

int main()
{
	test01();

	system("pause");

	return 0;
}