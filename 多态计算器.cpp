#include<iostream>//��׼��
using namespace std; //��׼�����
#include<string>//�ַ�����

class Abstract
{
public:
	virtual int getresult()//�м�����Ҫ��virtual
	{
		return 0;
	}

	int m_a;
	int m_b;//����������ֻ��дһ�Σ����ü�private

};//��Ľ�β�ǵü��Ϸֺ�
class addAbstract: public Abstract
{
public:					//�м����������Ȩ��public
	int getresult()
	{
		return (m_a + m_b);
	}
};
class subAbstract: public Abstract
{
public:					//�м����������Ȩ��public
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
//�ĸ�����ຯ��һ��Ҫ��ͬ�������ͬ��������ֵ����

void test1()
{
	Abstract *abc= new addAbstract;
	abc->m_a=10;
	abc->m_b=10;
	cout<<abc->m_a<<"+"<<abc->m_b<<"="<<abc->getresult()<<endl;
	delete abc;//�мǣ������мǣ������������µĶ���һ��Ҫ˳��д���ͷ�ָ�룡����
	

	abc= new subAbstract;//ע��ڶ��β�Ҫ��дAbstract *�������ظ����롣
	abc->m_a=100;
	abc->m_b=10;
	cout<<abc->m_a<<"-"<<abc->m_b<<"="<<abc->getresult()<<endl;
	delete abc;//�мǣ������мǣ������������µĶ���һ��Ҫ˳��д���ͷ�ָ�룡����
	
	abc= new mulAbstract;
	abc->m_a=10;
	abc->m_b=10;
	cout<<abc->m_a<<"*"<<abc->m_b<<"="<<abc->getresult()<<endl;
	delete abc;//�мǣ������мǣ������������µĶ���һ��Ҫ˳��д���ͷ�ָ�룡����
}

int main()
{
	test1();
	system("pause");
	return 0;
}

