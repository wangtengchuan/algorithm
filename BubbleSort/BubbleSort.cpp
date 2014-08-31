#include "BubbleSort.h"
/*
*There are three main implementation of bubble sort which of them follows the simple idea of compare the nearly element
*BubbleSort1 implement the basic function of bubble sort. The larger data sink into the bottom in the algorithm. 
*And we can let the smaller data float up vice versa.
*/
void BubbleSort1(int a[],int size)
{
	for (int i = 0; i < size;i++)
	{
		for (int j = 1; j < size - i; j++)
		{
			if (a[j - 1]>a[j])swap(a[j - 1], a[j]);
		}
	}
}
/*
The function 2 is an optimise to function 1, if there is no swap in one iteration, then the sorting process is done.
And there is no need to compare the data any more thus the time consuming is saved.
*/
void BubbleSort2(int a[], int size)
{
	int flag=1;
	while (flag)
	{
		flag = 0;
		for (int i = 0; i < size; i++)
		{
			for (int j = 1; j < size - i; j++)
			{
				if (a[j - 1]>a[j])
				{
					swap(a[j - 1], a[j]);
					flag = 1;
				}
			}
		}
	}	
}
/*The function 3 record the place after where there is no change so the comparation after that position is omitted.
*/
void BubbleSort3(int a[], int size)
{
	
	int position = size;
	while (position>1)
	{
		int k = position;
		for (int j = 1; j < k; j++)
		{
			if (a[j - 1]>a[j])
			{
				swap(a[j - 1], a[j]);
				position = j;
			}
		}
	}
}