#pragma once
#include <iostream>
#include <assert.h>
using namespace std;
typedef struct node
{
	int value;
	struct node* next;
}LinkedNode,*LinkedList;

void PrintList(LinkedList head);

LinkedList ReverseListByPointer(LinkedList head);
LinkedList ReverseListByRecursion(LinkedList head);

LinkedList Insertion(LinkedList head,int num);//insert a num into a linked list, assume the list is pre-ordered

LinkedList Deletion(LinkedList head, int num);//delete a node from a list which the value equals to num
bool IsExistLoop(LinkedList head);
LinkedList FindLoopPort(LinkedList head);



void PrintList(LinkedList head)
{
	LinkedList p1 = head;
	while (p1 != NULL)
	{
		cout << p1->value << endl;
		p1 = p1->next;
	}
}

LinkedList ReverseListByPointer(LinkedList head)
{
	LinkedList prev = NULL, curr = NULL, next = NULL;
	prev = head;
	curr = head->next;
	while (curr!= NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head->next = NULL;
	head = prev;
	return head;
}

LinkedList ReverseListByRecursion(LinkedList head)
{

}

LinkedList Insertion(LinkedList head, int num)
{
	LinkedList p, p1, p2;
	p = (LinkedList)malloc(sizeof(LinkedList));
	p->value = num;
	p2 = head;
	while (p2->next != NULL&&p2->value<num)
	{
		p1 = p2;
		p2 = p2->next;
	}
	if (p2 == head)
	{
		head = p;
		p->next = p2;
		return head;
	}
	else if (NULL == p2->next)
	{
		p1->next = p;
		p->next = NULL;
		return head;
	}
	else
	{
		p1->next = p;
		p->next = p2;
		return head;
	}
}

LinkedList Deletion(LinkedList head, int num)
{
	LinkedList p1=NULL, p2=NULL;
	p1 = head;
	while (p1->value != num&&p1->next != NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if (p1->value == num)
	{
		if (p1 == head)
		{
			head = p1->next;
			free(p1);
			return head;
		}
		else
		{
			p2->next = p1->next;
			free(p1);
			return head;
		}
	}
	else return NULL;
}


bool IsExistLoop(LinkedList head)
{
	LinkedList fast, slow;
	fast = head;
	slow = head;
	while (fast!=NULL&&fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)break;
	}
	return !(fast == NULL || fast->next == NULL);
}
/*找出环的入口节点，算法解释参考 http://blog.csdn.net/mingming_bupt/article/details/6331333 */
LinkedList FindLoopPort(LinkedList head)
{
	assert(head!=NULL);
	LinkedList fast, slow;
	fast = head;
	slow = head;
	while (fast != NULL&&fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)break;
	}
	if (fast == NULL || fast->next == NULL)return NULL;
	fast = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
}
