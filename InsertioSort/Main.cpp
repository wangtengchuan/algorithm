#include <iostream>
#include "InsertionSort.h"
int main()
{
	int a[] = { 69, 53, 5, 8, 9, 2, 5, 6, 1, 3, 8, 45 };
	InsertionSort(a, 12);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
		cout << a[i] << endl;
	cout << "Insertion sort end!" << endl;
	system("pause");
	return 0;
}