#pragma once
#include <iostream>
using namespace std;
class A
{
private:
	int value;
public:
	A(int n)
	{
		value = n;
	}
	A(const A &other)
	{
		value = other.value;
	}
	void Print()
	{
		cout << value << endl;
	}
};