// duotai.cpp : 定义控制台应用程序的入口点。
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
	virtual void display();//前有virtual为虚函数
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
	cout << "基类  " << feet << "英尺" << inches << "英寸" << endl;
}
class CMyFeet :public CFeet
{
	void display();
};
void CMyFeet::display()//称为函数覆盖
{
	cout << "派生类  " << feet << "英尺" << inches << "英寸" << endl;
}

int main()
{
	CFeet *p;
	p = new CMyFeet;//相当于CMyFeet orect;  p=&orect;就是让CMyFeet创建无名对象并赋值给p
	p->setfeet(3);//相当于orect.setfeet(3);
	p->setinches(6);
	p->display();//如没有虚函数为前提，基类是不能指向派生类的，输出的是基类的display,有虚函数时输出内容要取决于哪个类的无名对象赋值给的p
	p->CFeet::display();//输出CFeet的display,限定输出的函数的类只能是基类，不能是派生类，也就是只能是基类::函数
	return 0;
}

