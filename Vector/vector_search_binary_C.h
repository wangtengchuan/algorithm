#pragma once
/*���ֲ��ң�������A��lo��hi�ķ�Χ�ڲ���e*/
template<typename T> 
static Rank binSearch(T *A, T const &e, Rank lo, Rank hi)
{
	printf("BIN search (C)\n");
	while (lo < hi)
	{
		Rank mi = (lo + hi) >> 1;
		(A[mi] <= e) ? lo=mi+1 : hi=mi;//�Ⱥŷ����Ǳ��ǹؼ�
	}
	return --lo;
}
