#include "SelectionSort.h"
int main()
{
	int a[] = { 69, 53, 5, 8, 9, 2, 5, 6, 1, 3, 8, 45 };
	SelectionSort(a, 12);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
		std::cout << a[i] << std::endl;
	std::cout << "Selection heap sort end!" << std::endl;
	system("pause");
	return 0;
}