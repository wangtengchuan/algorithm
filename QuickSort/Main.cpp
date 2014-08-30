#include "QuickSort.h"
int main()
{
	int a[] = { 45, 53, 5, 8, 9, 69,2, 5, 6, 1, 3, 8};
	QuickSort(a,0,11);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
		std::cout << a[i] << std::endl;
	std::cout << "Quick sort end!" << std::endl;
	system("pause");
	return 0;
}