#include "ListByLinkedList.h"
#include <iostream>
#include <assert.h>
using namespace std;
struct Node
{
	int value;
	Position next;
};
List MakeEmpty(List L)
{

}
bool IsEmpty(List L)
{
	return L->next == NULL;
}
bool IsLast(Position P, List L)
{
	return P->next == NULL;
}
Position FindPrevious(int X, List L)
{
	Position P;
	P = L->next;
	while (P->value != X&&P->next!=NULL)P = P->next;
	return P;
}
void Delete(int X, List L)
{
	Position P = Find(X, L);
	if (P->next != NULL)
	{
		Position tmp = P->next;
		P->next
	}
}
Position FindPrevious(int X, List L)
{
	Position P;
	while (P->next != NULL&&P->next->value != X)
		P = P->next;
	return P;
}
void Insert(int X, List L,Position P)
{
	Position tmp = (Position)malloc(sizeof(struct Node));
	tmp->value = X;
	tmp->next = P->next;
	P->next = tmp;
}
void DeleteList(List L)
{
	Position P;
	P = L->next;
	while (P->next != NULL)
	{
		free(P);
		P = P->next;
	}
}
Position Header(List L);
Position First(List L);
Position Advance(Position P);
int Retrieve(Position P);
List Reverse(List L);