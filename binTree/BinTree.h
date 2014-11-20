#pragma once
#include "BinNode.h"
template<typename T>class BinTree
{
protected:
	void _size;//二叉树的规模
	BinNodePosi(T) _root;//根节点
	virtual int updateHeight(BinNodePosi(T) x);//更新节点x的高度
	void updateHeightAbove(BinNodePosi(T) x);//更新节点x以及其祖先的高度
public:
	BinTree() :_size(0), _root(NULL){}
	~BinTree(){ if (0 < _size) remove(_root); }

	int size() const{ return _size; }
	bool empty() const{return !_root}

	BinNodePosi(T) root() const { return _root; }
	BinNodePosi(T) insertAsRoot(T const& e);//将e当作根节点插入空的二叉树
	BinNodePosi(T) insertAsLC(BinNodePosi(T) x, T const& e);//e作为x的左孩子插入（原来没有左孩子）
	BinNodePosi(T) insertAsRC(BinNodePosi(T) x, T const& e);

	BinNodePosi(T) attachAsLC(BinNodePosi(T) x, BinTree<T>* &S);//树S作为x的左子树接入
	BinNodePosi(T) attachAsRC(BinNodePosi(T) x, BinTree<T>* &S);

	int remove(BinNodePosi(T) x);//删除位置x处节点为跟的子树，返回指子树的规模
	BinTree<T>* seced(BinNodePosi(T) x);//将子树从当前的树中摘除，并转换为独立的树
	
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
BinNodePosi(T) BinTree<T>::insertAsRoot(T const& e)//将e当作根节点插入空的二叉树
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