#include "HeapSort.h"
int main()
{
	int a[] = { 69, 53, 5, 8, 9, 2, 5, 6, 1, 3, 8, 45 };
	MinHeapSort(a, 12);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
		cout << a[i] << endl;
	cout << "Min heap sort end!" << endl;
	system("pause");
	return 0;
}