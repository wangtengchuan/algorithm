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