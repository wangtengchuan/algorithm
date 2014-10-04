#pragma once
/*二分查找，在数组A的lo与hi的范围内查找e*/
template<typename T> 
static Rank binSearch(T *A, T const &e, Rank lo, Rank hi)
{
	printf("BIN search (C)\n");
	while (lo < hi)
	{
		Rank mi = (lo + hi) >> 1;
		//(A[mi] <= e) ? lo=mi+1 : hi=mi;//等号放在哪边是关键
		(e < A[mi]) ? hi = mi : lo = mi+1;
	}
	return --lo;
}
