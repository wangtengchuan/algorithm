#pragma once
template<typename T>
int Vector<T>::deduplicate()
{
	int oldSize = _size;
	Rank i = 0;
	while (i < _size)
		find(_elem[i], 0, i) ? i++ : remove(i);
	return oldSize - _size;
}