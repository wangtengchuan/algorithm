#include "queue@array.h"
template<typename T>Queue<T>::Queue(int arraySize = 10)
{
	p = new T[arraySize];
	capacity = arraySize;
	front =0;
	rear = -1;
}

template<typename T>
Queue<T>::~Queue()
{
	delete[] p;
}

template<typename T>
bool Queue<T>::empty() const
{
	return (rear + 1) % capacity == front;
}

template<typename T>
bool Queue<T>::full() const
{
	return (rear + 2) % capacity == front;
}

template<typename T>
bool Queue<T>::enqueue(const T& e)
{
	if (!full())
	{
		rear = (rear + 1) % capacity;
		p[rear] = e;
		return true;
	}
	else
	{
		std::cout << "queue is full" << std::endl;
		return false;
	}
}

template<typename T>
bool Queue<T>::dequeue()
{
	if (empty())
	{
		std::cout << "empty queue, dequeue failed" << std::endl;
		return false;
	}
	else
	{
		delete (p + front);
		front = (front + 1) % capacity;
		return true;
	}
}

template<typename T>
T& Queue<T>::getFront() const
{
	assert(!empty());
	return p[front];
}

template<typename T>
T& Queue<T>::getRear() const
{
	assert(!empty());
	return p[rear];
}

template<typename T>
int Queue<T>::size() const
{
	if (empty()) return 0;
	else if (rear < front) return capacity - front + rear;
	else return rear - front + 1;
}