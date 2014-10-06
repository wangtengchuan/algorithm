#include <stdio.h>
class Base
{
private:
	int a;
public:
	Base()
	{
		printf("constructor of base class\n");
	};

	virtual ~Base()
	{
		printf("destrucor of base class\n");
	};

	void print()
	{
		printf("print something of base class\n");
	}

	virtual void foo()
	{
		printf("hello virtual foo from base class.\n");
	}
};

class Derived :public Base
{
public:
	Derived()
	{
		printf("constructor of derived class\n");
	};

	~Derived()
	{
		printf("destructor of derived class\n");
	}

	void print()
	{
		printf("print something of derived class\n");
	}

	void foo()
	{
		printf("hello virtual foo from derived class.\n");
	}

};