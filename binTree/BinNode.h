/*二叉树单个节点的模板类实现*/
#pragma once
#include<stdio.h> 
#define BinNodePosi(T) BinNode<T>*
#define stature(p) ((p)?(p)->height:-1)
typedef enum{RB_RED, RB_BLACK} RBColor;

template<typename T> struct BinNode
{
	T data;
	BinNodePosi(T) parent;
	BinNodePosi(T) lc;
	BinNodePosi(T) rc;
	int height;
	int npl;
	RBColor color;

	BinNode() :parent(NULL), lc(NULL), height(0), npl(1), color(RB_RED){};
	BinNode(T e, BinNodePosi(T) p = NULL, BinNodePosi(T) lc = NULL, BinNodePosi(T) rc = NULL, int h = 0, int l = 1, RBColor c = RB_RED) :
		data(e), parent(p), lc(lc), rc(rc), height(h), npl(l), color(c){}
	int size();//统计当前节点的后代总数
	BinNodePosi(T) insertAsLC(T const&);//将e作为当前节点的左孩子插入
	BinNodePosi(T) insertAsRC(T const&);
	BinNodePosi(T) succ();//取当前节点的直接后后继

	template<typename VST> void travLevel(VST&);//层次遍历

	template<typename VST> void travPre(VST&);//先序遍历

	template<typename VST> void travIn(VST&);//中序遍历

	template<typename VST> void travPost(VST&);//后序遍历

	bool operator<(BinNode const& bn);//操作符重载，用于大小比较
	bool operator==(BinNode const& bn);

	BinNodePosi(T) zig();//顺时针旋转
	BinNodePosi(T) zag();//逆时针旋转
};

template<typename T>
BinNodePosi(T) BinNode<T>::insertAsLC(T const& e)////将e作为当前节点的左孩子插入
{
	return lc = new BinNode(e, this);//parent=this
}

template<typename T>
BinNodePosi(T) BinNode<T>::insertAsRC(T const& e)//将e作为当前节点的右孩子插入
{
	return rc = new BinNode(e, this);
}