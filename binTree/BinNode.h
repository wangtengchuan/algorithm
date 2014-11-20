/*�����������ڵ��ģ����ʵ��*/
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
	int size();//ͳ�Ƶ�ǰ�ڵ�ĺ������
	BinNodePosi(T) insertAsLC(T const&);//��e��Ϊ��ǰ�ڵ�����Ӳ���
	BinNodePosi(T) insertAsRC(T const&);
	BinNodePosi(T) succ();//ȡ��ǰ�ڵ��ֱ�Ӻ���

	template<typename VST> void travLevel(VST&);//��α���

	template<typename VST> void travPre(VST&);//�������

	template<typename VST> void travIn(VST&);//�������

	template<typename VST> void travPost(VST&);//�������

	bool operator<(BinNode const& bn);//���������أ����ڴ�С�Ƚ�
	bool operator==(BinNode const& bn);

	BinNodePosi(T) zig();//˳ʱ����ת
	BinNodePosi(T) zag();//��ʱ����ת
};

template<typename T>
BinNodePosi(T) BinNode<T>::insertAsLC(T const& e)////��e��Ϊ��ǰ�ڵ�����Ӳ���
{
	return lc = new BinNode(e, this);//parent=this
}

template<typename T>
BinNodePosi(T) BinNode<T>::insertAsRC(T const& e)//��e��Ϊ��ǰ�ڵ���Һ��Ӳ���
{
	return rc = new BinNode(e, this);
}