#ifndef _VECTOR_H_
#define _VECTOR_H_
typedef int Rank;
#define DEFAULT_CAPACITY 3
template<typename T> class Vector{
protected:
	Rank _size;
	int _capacity;
	T* _elem;
	void copyFrom(T const *A, Rank lo, Rank hi);
	void expand();
	void shrink();
	bool bubble(Rank lo, Rank hi);//…®√ËΩªªª
	void bubbleSort(Rank lo, Rank hi);
	Rank max(Rank lo, Rank hi);

public:
	Vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0)
	{
		_elem = new T[_capacity = c];
		for (_size = 0; _size < s; _elem[_size++] = v);
	}

	Vector(T const *A, Rank n) copyFrom(A,0,n);

	Vector(T const *A, Rank li, Rank hi)
	{
		copyFrom(A, li, hi);
	}

	Vector(Vector<T> const& V) copyFrom(V._elem, 0, V._size);

	Vector(Vector<T> const& V, Rank lo, Rank hi) copyFrom(V._elem, lo, hi);

	~Vector(){ delete[] _elem; }

	Rank size()const 
	{
		return _size;
	}

	bool empty() const
	{
		return !_size;
	}

	int disordered() const;
	Rank find(T const &e) const
	{
		return find(e, 0, _size);
	}
	Rank find(T const &e, Rank lo, Rank hi) const;
	Rank search(T const &e) const
	{
		return 
	}
	Rank insert(Rank r,T const& e);
	Rank insert(T const& e)
	{
		return insert(_size, e);
	}
	
};

#endif