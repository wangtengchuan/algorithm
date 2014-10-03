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
	a[i] = temp;//�������������һ���Ǽ��ٽ����Ĵ���������ÿ�Ƚ�һ�ξͽ���
}
/*MinHeapAddNumber�ǽ�nNum�������,ͨ�����ú���MinHeapFixup��ʵ��*/
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
/*ɾ����С���൱�ڽ��Ѷ���Ԫ��ɾ����ͬʱ���������һ��Ԫ�����Ƶ��Ѷ���Ȼ���ٵ���MinHeapFixdown�������жѵĵ���*/
void MinHeapDeleteNumber(int a[], int n)
{
	swap(a[0],a[n-1]);
	MinHeapFixdown(a, 0, n - 1);//ע��������n-1��Ϊ���һ��Ԫ����ԭ���ĶѶ���Ҫ��ɾ����Ԫ��
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
