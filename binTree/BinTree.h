#pragma once
#include "BinNode.h"
template<typename T>class BinTree
{
protected:
	void _size;//�������Ĺ�ģ
	BinNodePosi(T) _root;//���ڵ�
	virtual int updateHeight(BinNodePosi(T) x);//���½ڵ�x�ĸ߶�
	void updateHeightAbove(BinNodePosi(T) x);//���½ڵ�x�Լ������ȵĸ߶�
public:
	BinTree() :_size(0), _root(NULL){}
	~BinTree(){ if (0 < _size) remove(_root); }

	int size() const{ return _size; }
	bool empty() const{return !_root}

	BinNodePosi(T) root() const { return _root; }
	BinNodePosi(T) insertAsRoot(T const& e);//��e�������ڵ����յĶ�����
	BinNodePosi(T) insertAsLC(BinNodePosi(T) x, T const& e);//e��Ϊx�����Ӳ��루ԭ��û�����ӣ�
	BinNodePosi(T) insertAsRC(BinNodePosi(T) x, T const& e);

	BinNodePosi(T) attachAsLC(BinNodePosi(T) x, BinTree<T>* &S);//��S��Ϊx������������
	BinNodePosi(T) attachAsRC(BinNodePosi(T) x, BinTree<T>* &S);

	int remove(BinNodePosi(T) x);//ɾ��λ��x���ڵ�Ϊ��������������ָ�����Ĺ�ģ
	BinTree<T>* seced(BinNodePosi(T) x);//�������ӵ�ǰ������ժ������ת��Ϊ��������
	
	template<typename VST>
	void travLevel(VST& visit){}

	bool operator<(BinNode<T> const&t)
	{
		return _root && t._root && (_root == t._root);
	}

	void stretchToLPath() { stretchByZag(_root); }
	void stretchToRPath(){ stretchByZig(_root, _size); }

};

template<typename T>
int BinTree<T>::updateHeight(BinNodePosi(T) x)
{
	return x->height = 1 + max(stature(x->lc), stature(x->rc));
}
template<typename T>
void BinTree<T>::updateHeightAbove(BinNodePosi(T) x)
{
	while (x)
	{
		updateHeight(x);
		x = x->parent;
	}
}

template<typename T>
BinNodePosi(T) BinTree<T>::insertAsRoot(T const& e)//��e�������ڵ����յĶ�����
{
	_size = 1;
	return _root = new BinNode<T>(e);
}

template<typename T>
BinNodePosi(T) BinTree<T>::insertAsLC(BinNodePosi(T) x, T const& e)
{
	_size++;
	x->insertAsLC(e);
	updateHeightAbove(x);
	return x->lc;
}

template<typename T>
BinNodePosi(T) BinTree<T>::insertAsRC(BinNodePosi(T) x, T const& e)
{
	_size++;
	x->insertAsRC(e);
	updateHeightAbove(x);
	return x->rc;
}