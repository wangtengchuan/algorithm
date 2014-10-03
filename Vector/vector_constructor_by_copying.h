#pragma once//这条语句能够保证头文件只被编译一次，但是这条语句与编译器相关，所以用#ifndef比较通用 
template <typename T>
void Vector<T>::copyFrom(const *A, Rank li, Rank hi)
{
	_elem = new T[_capacity = 2 * (hi - lo)];
	_size = 0;
	for (lo < hi)_elem[_szie++] = A[lo++];
}