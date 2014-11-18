#pragma once
typedef struct node
{
	int value;
	struct node* next;
}LinkedNode, *LinkedList;

void PrintList(LinkedList head);

LinkedList ReverseListByPointer(LinkedList head);
LinkedList ReverseListByRecursion(LinkedList head);

LinkedList Insertion(LinkedList head, int num);//insert a num into a linked list, assume the list is pre-ordered

LinkedList Deletion(LinkedList head, int num);//delete a node from a list which the value equals to num
bool IsExistLoop(LinkedList head);
LinkedList FindLoopPort(LinkedList head);
template<typename T>class List
{
private:
	int _size;
	ListNodePosi(T) header;
	ListNodePosi(T) trailer;
protected:
	void init();
	int clear();
	void copyNodes(ListNodePosi(T), int);
public:
	List()
	{
		init();
	}
	List(List<T> const& L);
	List(List<T> const& L, Rank r, int n);
	List(ListNodePosi(T) p, int n);

	~List();
	Rank size() const
	{
		return _size;
	}
	bool empty() const
	{
		return _size <= 0;
	}
	ListNodePosi(T) insertAsLast(T const& e);
	ListNodePosi(T) last() const
	{
		return trailer->pred;
	}
	T remove(ListNodePosi(T) p);
};