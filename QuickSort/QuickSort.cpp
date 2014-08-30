/*This quick sort algorithm is implimented according to webpage http://www.zhihu.com/question/23171968
It's originally created by Bently in Beautiful code.
[l+1,m] contain the elements smaller than the pivot, swap element l with m.
First, we choose the first element in the array to be the base-number(pivot). Then, 
�����Ľ���һ�飬����ĵĲ������м��forѭ����
*[l+1,m]�����ŵ�ǰ�Ѿ�����Ԫ��������С��pivot��������ʼʱ��ȡ��һ��Ԫ��Ϊpivot����Ԫ��
*iָ����һ���������Ԫ��
*��l��Ԫ����pivot
*/
#include "QuickSort.h"
using namespace std;
void QuickSort(int x[],int l, int u)
{
	int i, m;
	if (l >= u)return;
	m = l;
	for (i = l + 1; i <= u; i++)
	{
		if (x[i] < x[l])
		{
			m = m + 1;
			swap(x[m], x[i]);
		}
	}
	swap(x[l], x[m]);
	QuickSort(x, l, m - 1);
	QuickSort(x, m + 1, u);
}