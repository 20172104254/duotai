// duotai.cpp : �������̨Ӧ�ó������ڵ㡣
//


#include "stdafx.h"
#include"iostream"
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	virtual void display();//ǰ��virtualΪ�麯��
	void setfeet(int f);
	void setinches(int i);
	int getfeet();
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
}
void CFeet::setfeet(int f)
{
	feet = f;
}
void CFeet::setinches(int i)
{
	inches = i;
}
int CFeet::getfeet()
{
	return feet;

}
int CFeet::getinches()
{
	return inches;
}
void CFeet::display()
{
	cout << "����  " << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
class CMyFeet :public CFeet
{
	void display();
};
void CMyFeet::display()//��Ϊ��������
{
	cout << "������  " << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}

int main()
{
	CFeet *p;
	p = new CMyFeet;//�൱��CMyFeet orect;  p=&orect;������CMyFeet�����������󲢸�ֵ��p
	p->setfeet(3);//�൱��orect.setfeet(3);
	p->setinches(6);
	p->display();//��û���麯��Ϊǰ�ᣬ�����ǲ���ָ��������ģ�������ǻ����display,���麯��ʱ�������Ҫȡ�����ĸ������������ֵ����p
	p->CFeet::display();//���CFeet��display,�޶�����ĺ�������ֻ���ǻ��࣬�����������࣬Ҳ����ֻ���ǻ���::����
	return 0;
}

