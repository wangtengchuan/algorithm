#include "Fib.h"
#include <iostream>
int main()
{
	Fib fib;
	for (int i = 1; i < 30;i++)
	std::cout << fib.get(i) << std::endl;
	system("pause");
	return 0;
}