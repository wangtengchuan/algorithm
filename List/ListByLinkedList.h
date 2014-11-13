#pragma once
#include <iostream>
using namespace std;
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
typedef int ElementType;

List MakeEmpty(List L);
bool IsEmpty(List L);
bool IsLast(Position P,List L);
Position Find(int X, List L);
void Delete(int X, List L);
Position FindPrevious(int X,List L);
void Insert(int X, List L);
void DeleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);
int Retrieve(Position P);
List Reverse(List L);//·´×ªÁ´±í