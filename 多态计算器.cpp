#include<iostream>//标准库
using namespace std; //标准输出库
#include<string>//字符串库

class Abstract
{
public:
	virtual int getresult()//切记这里要加virtual
	{
		return 0;
	}

	int m_a;
	int m_b;//这两个常量只用写一次，不用加private

};//类的结尾记得加上分号
class addAbstract: public Abstract
{
public:					//切记在里面加上权限public
	int getresult()
	{
		return (m_a + m_b);
	}
};
class subAbstract: public Abstract
{
public:					//切记在里面加上权限public
	int getresult()
	{
		return (m_a - m_b);
	}
};

class mulAbstract: public Abstract
{
public:
	int getresult()
	{
		return m_a * m_b;
	}
};
//四个类的类函数一定要相同，这个相同包括返回值类型

void test1()
{
	Abstract *abc= new addAbstract;
	abc->m_a=10;
	abc->m_b=10;
	cout<<abc->m_a<<"+"<<abc->m_b<<"="<<abc->getresult()<<endl;
	delete abc;//切记！！！切记！！！建立完新的堆区一定要顺手写上释放指针！！！
	

	abc= new subAbstract;//注意第二次不要再写Abstract *，否则重复申请。
	abc->m_a=100;
	abc->m_b=10;
	cout<<abc->m_a<<"-"<<abc->m_b<<"="<<abc->getresult()<<endl;
	delete abc;//切记！！！切记！！！建立完新的堆区一定要顺手写上释放指针！！！
	
	abc= new mulAbstract;
	abc->m_a=10;
	abc->m_b=10;
	cout<<abc->m_a<<"*"<<abc->m_b<<"="<<abc->getresult()<<endl;
	delete abc;//切记！！！切记！！！建立完新的堆区一定要顺手写上释放指针！！！
}

int main()
{
	test1();
	system("pause");
	return 0;
}

