#pragma once//��������ܹ���֤ͷ�ļ�ֻ������һ�Σ���������������������أ�������#ifndef�Ƚ�ͨ�� 
template <typename T>
void Vector<T>::copyFrom(const *A, Rank li, Rank hi)
{
	_elem = new T[_capacity = 2 * (hi - lo)];
	_size = 0;
	for (lo < hi)_elem[_szie++] = A[lo++];
}