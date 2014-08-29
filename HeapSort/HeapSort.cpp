#include "HeapSort.h"
/*The introduction of the heap sort algorithm is shown as http://blog.csdn.net/v_july_v/article/details/6198644.
Or you can refer to this blog http://blog.csdn.net/morewindows/article/details/6709644
*/
void MinHeapFixup(int a[], int size)
{

}
/*
Insert a number to a heap by using  MinHeapFixup function.
*/
void MinHeapAddNumber(int a[], int size, int nNum)
{
	a[size] = nNum;
	MinHeapFixup(a, size);
}
void HeapSort(int a[], int size)
{

}
