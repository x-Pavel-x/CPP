#include "pch.h"
#include <iostream>
class shifrovanie 
{
private:
	//...
public:
	shifrovanie() {};
	virtual ~shifrovanie() {};
	//...
	void method_shifrovaniya() {}
};
class asimmetr_shifrovanie : public shifrovanie 
{
private:
	double close_key;
public:
	double open_key;
	asimmetr_shifrovanie() {}
	~asimmetr_shifrovanie() {}
};
class simmetr_shifrovanie : public shifrovanie
{
public:
	simmetr_shifrovanie() {}
	~simmetr_shifrovanie() {}

};
class shifr_cesar : public simmetr_shifrovanie 
{
private:
	//...
public:
	//...
	shifr_cesar() {}
	~shifr_cesar() {}
};
int main()
{
	return 0;
}

