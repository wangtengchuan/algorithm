#include <iostream>
#include <algorithm>
using namespace std;
int SumI(int A[], int n);
int SumI2(int A[], int n);
int SumI3(int A[], int lo,int hi);
void reverse(int A[],int lo,int hi);
void max2(int A[], int lo, int hi, int &x1, int &x2);
void max21(int A[], int lo, int hi, int &x1, int &x2);
void max23(int A[], int lo, int hi, int &x1, int &x2);
void topk(int A[]);//top k 问题

class Base
{
private:
	int a, b;
protected:
	int c;
	void expand();
public:
	int d;
	//int A[] = {1,2,3};
	void set(int ia, int ib)
	{
		a = ia;
		b = ib;
	}
	//int sum(){ return SumI(A, 3); }
};

class Derive :public Base
{};

int SumI(int A[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += A[i];
	}
	return sum;
}
int SumI2(int A[], int n)
{
	return (n < 1) ? 0 : SumI2(A, n - 1) + A[n - 1];
}

int SumI3(int A[], int lo, int hi)
{
	if (lo == hi) return A[lo];
	int mi = (lo + hi) >> 1;
	return SumI3(A, lo, mi) + SumI3(A, mi + 1, hi);
}
/*reverse函数用于将数组进行反转*/
void reverse(int A[], int lo, int hi)
{
	if (lo < hi)
	{
		swap(A[lo], A[hi]);
		reverse(A, lo + 1, hi - 1);
	}
}
/*max2函数用于找到数组中最大的两个数*/
void max2(int A[], int lo, int hi, int &x1, int &x2)
{
	x1 = lo, x2 = lo;
	for (int i = lo+1; i < hi; i++)
	{
		if (A[x1] < A[i])x1 = i;
	}
	for (int i = lo + 1; i < x1; i++)
	{
		if (A[x2] < A[i])x2 = i;
	}
	for (int i = x1 + 1; i < hi; i++)
	{
		if (A[x2] < A[i])x2 = i;
	}
}
void max21(int A[], int lo, int hi, int &x1, int &x2)
{
	x1 = lo, x2 = lo;
	for (int i = lo; i < hi; i++)
	{
		if (A[i]>A[x1])
		{
			
			x2 = x1; 
			x1 = i;
		}
		else if (A[i]<A[x1] && A[i]>A[x2])x2 = i;
		else continue;
	}
}

void max22(int A[], int lo, int hi, int &x1, int &x2)
{
	if (A[x1 = lo] < A[x2 = lo + 1])swap(x1, x2);
	for (int i = lo; i<hi; i++)
	{
		if (A[i]>A[x2])
		if (A[x2 = i] > A[x1])swap(x1, x2);
	}
}
/*用分而治之的方法来解决这个问题*/
void max23(int A[], int lo, int hi, int &x1, int &x2)
{
	if (hi - lo == 2)
	{
		if (A[x1 = lo] < A[x2 = lo + 1])swap(x1, x2);
	}
	if (hi - lo == 3)
	{
		if (A[x1 = lo] < A[x2 = lo + 1])swap(x1, x2);
		if (A[lo+2]>A[x2])
		if (A[x2 = lo + 2]>A[x1])swap(x1, x2);
	}
	
	int mi = (lo + hi) >> 1; 
	int x1L, x2L;
	max23(A, lo, mi, x1L, x2L);
	int x1R, x2R;
	max23(A, mi + 1,hi, x1R, x2R);
	if (x1L > x1R)
	{
		x1 = x1L;
		x2 = max(x2L, x1R);
	}
	else
	{
		x1 = x1R;
		x2 = max(x1L, x2R);
	}
}