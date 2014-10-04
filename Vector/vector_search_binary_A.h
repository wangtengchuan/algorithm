#pragma once
template<typename T>
static Rank binSearch(T *A, const &e, Rank lo, Rank hi)
{
	while (lo < hi)
	{
		Rank mi = (lo + hi) >> 1;
		if (A[mi] < e)lo = mi + 1;
		else if (e < A[mi])hi = mi;
		else if(A[mi]==e)return mi;
	}
	return -1;
}