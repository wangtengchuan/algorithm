#pragma once
#include "../Fibonacci/Fib.h"
template<typename T>
static Rank fibSearch(T *A, const &e, Rank lo, Rank hi)
{
	printf("Fib search implementation\n");
	Fib fib;
	while (lo < hi)
	{
		while (hi - lo < fib.get(hi - lo))
		{
			Rank mi = lo + fib.get(hi - lo - 1) - 1;
			if (e < A[mi])hi = mi;
			else if (A[mi] < e)lo = mi + 1;
			else return mi;
		}
	}
	return -1;
}