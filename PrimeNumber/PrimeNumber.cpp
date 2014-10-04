#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int end;
	cout << "please input the max number" << endl;
	cin >> end;
	int i, j, k;
	for (i = 1; i <=end; i++)
	{
		k = sqrt(i);
		for (j = 2; j <= k; j++)
		{
			if (i%j == 0)break;
		}
		if (j>k)
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}