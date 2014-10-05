#include "NQueen.h"
int main()
{
	NQueen nqueen(8);
	nqueen.nQueens(0);
	std::cout << nqueen.showSum() <<std::endl;
	system("pause");
	return 0;
}