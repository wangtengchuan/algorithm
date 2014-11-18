/*
链表的数组实现，参考
// http://wenku.baidu.com/link?url=D-pQFFzkm9OZrBw34nsSl9lo4saPD2DnNUuHsCsJKpHaRI5RuLtiwWGtMLADqSf_8_7nobgrlJjnnhSRcBaW6d-Q___jV2hf-QzBg7BP6J7
*/
#include "ListByArray.h"
using namespace std;
#define MAXSIZE 100
typedef struct Node
{
	int data;
	int cur;
}List[MAXSIZE];//这里的typedef的意思是List是一种数据类型，每一种List是一个Node[MAXSIZE]类型

void InitList(List space)
{
	for (int i = 0; i < MAXSIZE; i++)
		space[i].cur = i + 1;
	space[MAXSIZE - 1].cur = 0;
}

void FreeSSL(List space, int k)
{
	space[k].cur = space[0].cur;
	space[0].cur = k;
}

int MallocSSL(List space)
{

}