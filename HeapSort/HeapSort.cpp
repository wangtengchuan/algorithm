#include "HeapSort.h"
/*The introduction of the heap sort algorithm is shown as http://blog.csdn.net/v_july_v/article/details/6198644.
Or you can refer to this blog http://blog.csdn.net/morewindows/article/details/6709644
*/
/*
Insert a number to a heap by using  MinHeapFixup function.
*/

void MinHeapFixup(int a[], int i)
{
	int j, temp;//node j is parent node of node i
	temp = a[i];//initialize
	j = (i - 1) / 2;//initialize
	while (j >= 0 && i != 0)
	{
		if (a[i] < a[j])
		{
			a[i] = a[j];
			i = j;
			j = (i - 1) / 2;
		}
	}
	a[i] = temp;//将交换放在最后一步是减少交换的次数，避免每比较一次就交换
}
/*MinHeapAddNumber是将nNum插入堆中,通过调用函数MinHeapFixup来实现*/
void MinHeapAddNumber(int a[], int size, int nNum)
{
	a[size] = nNum;
	MinHeapFixup(a, size);
}
void MinHeapFixdown(int a[], int i, int n)
{
	int j, temp;
	temp = a[i];
	j = 2 * i + 1;
	while (j < n)
	{
		if (a[j]>a[j + 1] && j + 1 < n)j++;
		if (a[j] >= temp&&a[j + 1] >= temp)break;
		a[i] = a[j];
		i = j;
		j = 2 * i + 1;
	}
	a[i] = temp;
}
/*删除最小数相当于将堆顶的元素删除，同时将堆中最后一个元素上移到堆顶，然后再调用MinHeapFixdown函数进行堆的调整*/
void MinHeapDeleteNumber(int a[], int n)
{
	swap(a[0],a[n-1]);
	MinHeapFixdown(a, 0, n - 1);//注意这里是n-1因为最后一个元素是原来的堆顶是要被删除的元素
}

void MakeMinHeap(int a[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		MinHeapFixdown(a, i, n);
}
void MinHeapSort(int a[], int n)
{
	for (int i = n - 1; i >= 1; i--)
	{
		swap(a[i], a[0]);
		MinHeapFixdown(a, 0, i);
	}
}
