#pragma once

class Base
{
public:
	virtual void Function1(){};
	virtual void Function2(){};
};

class D1: public Base
{
public:
	virtual void Function1(){};
};

class D2 :public Base
{
public:
	virtual void Function2(){};
};