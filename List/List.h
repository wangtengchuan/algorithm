#ifndef _LIST_H_
#define _LIST_H_
typedef struct node
{
	int data;
	struct node* next;
}LinkedNode,*LinkedList;
void ReverseList(LinkedNode *pCur,LinkedList ListHead);
#endif