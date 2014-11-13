#include "List.h"
#include <iostream>
using namespace std;
//struct Node
//{
//	int value;
//	Node* next;
//};
//Node* Combine(Node* head1, Node* head2)
//{
//	if (NULL == head1)return head2;
//	else if (NULL == head2)return head1;
//	else
//	{
//		Node *newHead = NULL;
//		if (head1->value < head2->value)
//		{
//			newHead->next = head1;
//			return Combine(head1->next, head2);
//		}
//		else
//		{
//			newHead->next = head2;
//			return Combine(head1, head2->next);
//		}
//	}
//}
//int main()
//{
//	Node* head1p1 = NULL;
//	Node* head1p2 = NULL;
//	Node* head1p3 = NULL;
//	head1p1->value = 1;
//	head1p1->next = head1p2;
//	head1p2->value = 2;
//	head1p2->next = head1p3;
//	head1p3->value = 3;
//	head1p3->next = NULL;
//
//	Node* head2p1 = NULL;
//	Node* head2p2 = NULL;
//	Node* head2p3 = NULL;
//	Node* head2p4 = NULL;
//	head2p1->value = 2;
//	head2p1->next = head2p2;
//	head2p2->value = 8;
//	head2p2->next = head2p3;
//	head2p3->value = 9;
//	head2p3->next = head2p4;
//	head2p4->value = 10;
//	head2p4->next = NULL;
//
//	Node* newHead = Combine(head1p1, head2p1);
//	while (newHead != NULL)
//	{
//		cout << newHead->value << endl;
//		newHead = newHead->next;
//	}
//	return 0;
//}
int main()
{
	LinkedList head = new LinkedNode;
	head->value = 10;
	head->next = NULL;
	std::cout << "Before insert" << std::endl;
	PrintList(head);
	Insertion(head, 12);
	std::cout << "After insert" << std::endl;
	PrintList(head);
	cout << "After delete" << endl;
	PrintList(Deletion(head, 10));
	getchar();
	return 0;;
}

