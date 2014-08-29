#include "ShellSort.h"
/*
*Reference:http://blog.csdn.net/morewindows/article/details/6668714
*/
void ShellSort(int a[], int size)
{
	int i, j, k, incresement;
	for (incresement = size / 2; incresement > 0; incresement /= 2)
	{
		for (i = 0; i < incresement; i++)
		{
			for (j = i + incresement; j < size; j+=incresement)
			{
				/*The loop below is a insertion sort process*/
				if (a[j] < a[j - incresement])
				{
					int temp = a[j];
					for (k = j - incresement; a[k]>temp;k-=incresement)a[k + incresement] = a[k];
					a[k+incresement] = temp;
				}
			}
		}
	}
}