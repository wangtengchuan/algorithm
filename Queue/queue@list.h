#pragma once
#include "../List/list.h"
template<typename T>class Queue��public List<T>
{
public:
	void enqueue(T const& e)
	{
		insertAsLast(e);
	}
	T dequeue()
	{
		return remove(first());
	}
	T7 front()
	{
		return first()->data
	}

};