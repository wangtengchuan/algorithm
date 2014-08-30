/*This quick sort algorithm is implimented according to webpage http://www.zhihu.com/question/23171968
It's originally created by Bently in Beautiful code.
[l+1,m] contain the elements smaller than the pivot, swap element l with m.
First, we choose the first element in the array to be the base-number(pivot). Then,
when the first iteration is over, the m th number is the dividing line between element smaller than pivot and bigger than pivot.
[l+1,m] contain the elements smaller than the pivot, swap element l with m.
So we change pivot with m th element.
用中文解释一遍，最核心的部分是中间的for循环。
*1.[l+1,m]保存着当前已经处理元素中所有小于pivot（迭代开始时候取第一个元素为pivot）的元素
*2.i指向下一个待处理的元素
*3.第l个元素是pivot
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
		//the essence of the algorithm lies in the if statements below. you should recite that in case to be asked.
		if (x[i] < x[l])
		{
			m = m + 1;
			swap(x[m], x[i]);
		}
	}
	swap(x[l], x[m]);//change element l with element m to make sure [l,m-1] are smaller than pivot and [m+1.u] are bigger than that.
	QuickSort(x, l, m - 1);
	QuickSort(x, m + 1, u);
}

void QuickSort2(int x[], int left, int right)
{
	int i, j,m;
	for (i=left+1,j = right;i<j;)
	{
		while (x[j] >= x[left])j++;
		while (x[i] < x[left])i++;
		if (x[i] >= x[left] && x[j] < x[left])
		{
			swap(x[i], x[j]);
			i++;
			j++;
		}
		if (i>j)
		{
			m = j;
			swap(x[left], x[m]);
		}
		if ()
		while ()
	}
	swap(x[m],);//TODO
	QuickSort2(x, left, m - 1);
	QuickSort2(x,m + 1, right);
}