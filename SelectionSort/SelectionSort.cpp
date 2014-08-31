#include "SelectionSort.h"
using namespace std;
void SelectionSort(int a[], int n)
{
	int min,minPosition;
	for (int i = 0; i < n; i++)
	{
		min = a[i];
		minPosition = i;
		for (int j = i + 1; j < n; j++)
		{
			/*do not swap a[i] with a[j] in this inner loop because min may change several times 
			before the smallest number been found*/
			if (a[j] < min)
			{
				min = a[j];
				minPosition = j;
			}
		}
		if (minPosition != i)swap(a[i], a[minPosition]);
	}
}