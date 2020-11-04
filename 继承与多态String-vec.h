#pragma once
#ifndef STRINGVEC_H
#define STRINGVEC_H
#include <iostream> 
using namespace std;	
class Stringvec										    //基类
{
public:
	Stringvec();										//构造函数
	virtual ~Stringvec();                       //虚析构函数
	virtual void Show(ostream& out) const;				//用于输出（虚函数）
	virtual Stringvec& operator+();
	virtual int length()=0;								//长度（纯虚函数）
	virtual bool operator==(const Stringvec & s)=0;      //判断是否相等
	friend  ostream& operator<<(ostream& out, const Stringvec& s);
protected:
};
ostream& operator<<(ostream& out, const Stringvec & s)
{
	s.Show(out);
	return out;
}
#endif
