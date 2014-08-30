/*The merge sort algorithm is a classsic demo to show devide and conquer.
First, we should divide the array to a series of short array, then we should combine them in order.
The illustration are detailed in the following webpages:
http://dsqiu.iteye.com/blog/1707111
http://blog.csdn.net/morewindows/article/details/6678165
*/
#include "MergeSort.h"
/*The MergeArray function merges two array in order. The left part is [first,mid],the right part is between [mid+1,last]*/
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
/*The MergeSort fucntion devide the array into two sub-array at the length of n/2.
Then the two divede themselves iteratively. After that, 
the function MergeArray will be called to merge the two array into a ascending array.*/
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
}