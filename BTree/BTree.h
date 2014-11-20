/*B����ʵ���ļ�*/
#pragma once
#include "BTNode.h"

template <typename T>class BTree
{
protected:
	int _size;
	int _order;
	BTNodePosi(T) _root;
	BTNodePosi(T) _hot;
	void solveOverflow(BTNodePosi(T));
	void solveUnderflow(BTNodePosi(T));
public:
	BTree(int order = 3) : _order(order), _size(0)
	{
		_root = new BTNode<T>();
	}

	~BTree()
	{
		if (_root) release(_root);
	}

	const int order()
	{
		return _order;
	}
	const int size()
	{
		return _size;
	}
	BTNodePosi(T)& root()
	{
		return _root;
	}
	bool empty() const
	{
		return !_root;
	}
	BTNodePosi(T) search(const T& e);//�����в���ֵΪe�Ľڵ�
	bool insert(const T& e);
	bool remove(const T& e);
};

template<typename T>
void BTree<T>::solveOverflow(BTNodePosi(T))
{

}

template<typename T>
void BTree<T>::solveUnderflow(BTNodePosi(T))
{

}

template<typename T>
BTNodePosi(T) BTree<T>::search(const T& e)//�����в���ֵΪe�Ľڵ�
{
	BTNodePosi(T) v = _root;
	_hot = NULL;

}