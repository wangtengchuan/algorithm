/*This quick sort algorithm is implimented according to webpage http://www.zhihu.com/question/23171968
It's originally created by Bently in Beautiful code.
[l+1,m] contain the elements smaller than the pivot, swap element l with m.
First, we choose the first element in the array to be the base-number(pivot). Then, 
用中文解释一遍，最核心的部分是中间的for循环。
*[l+1,m]保存着当前已经处理元素中所有小于pivot（迭代开始时候取第一个元素为pivot）的元素
*i指向下一个待处理的元素
*第l个元素是pivot
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