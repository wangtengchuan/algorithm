#include "Heap.h"
struct HeapStruct
{
	int Capacity;
	int Size;
	int *Elements;//A pointer to int
};
PriorityQueue Initialize(int MaxElements)//MaxElments means the size of the heap or the number of elements contain in the heap
{
	PriorityQueue H;
	H = (PriorityQueue)malloc(sizeof(struct HeapStruct));
	if (H = NULL)std::cout << "Fatal error, out of space" << std:: endl;
	H->Elements = (int *)malloc((MaxElements+1)*sizeof(int));
	if (H->Elements == NULL)std::cout << "Fatal error, out of space" << std::endl;
	H->Capacity = MaxElements;
	H->Size = 0;
	H->Elements[0] = MinData;
}
void Insert(int X, PriorityQueue H)
{
	int i;
	if (IsFull(H))
	{
		std::cout << "Priority queue is full." << std::endl;
		return;
	}
	for (i = ++H->Size; H->Elements[i / 2] > X; i /= 2)H->Elements[i] = H->Elements[i / 2];
	H->Elements[i] = X;
}
