#include "MergeSort.h"
void MergeArray(int a[], int first, int mid, int last, int temp[])
{
	int i = first, j = mid + 1,index=0;
	while (i <= mid&&j <= last)
	{
		if (a[i] < a[j])temp[index++] = a[i++];
		else temp[index++] = a[j++];
	}
	while (i <= mid)temp[index++] = a[i++];
	while (j <= last)temp[index++]=a[j++];
	for (i = 0; i < index; i++)
		a[first + i] = temp[i];
}
/*int a[] = { 45, 53, 5, 8, 9, 69, 2, 5, 6, 1, 3, 8 };*/
void MergeSort(int a[],int first,int last)
{
	int *p = new int[sizeof(a)/sizeof(int)];
	if (first < last)
	{
		int mid = (first + last) / 2;
		MergeSort(a, first, mid);
		MergeSort(a,mid+1,last);
		MergeArray(a, first, mid, last, p);
	}
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
		cout << *(p + i) << endl;
}