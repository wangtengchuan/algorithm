void InsertionSort(int a[], int size)
{
	int i,j,k;
	for (i = 1; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (a[i] < a[j])
			{
				k = j;
				int temp = a[i];
				for (k=i-1; k >j-1; k--)
				{
					a[k + 1] = a[k];
				}
				a[j] = temp;
			}
		}
	}
}