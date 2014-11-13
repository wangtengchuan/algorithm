/*本题是Leetcode上的题，求排列组合问题，通常叫做求字符串的全排列问题。链接如下 https://oj.leetcode.com/problems/permutations-ii/ */
//#include "Permutation2.h"
//using namespace std;
//int main()
//{
//	Solution perm;
//
//}
#include<iostream>
using namespace std;
#include<assert.h>

void Permutation(char* pStr, char* pBegin)
{
	assert(pStr && pBegin);

	if (*pBegin == '\0')
		printf("%s\n", pStr);
	else
	{
		for (char* pCh = pBegin; *pCh != '\0'; pCh++)
		{
			swap(*pBegin, *pCh);
			Permutation(pStr, pBegin + 1);
			swap(*pBegin, *pCh);
		}
	}
}

int main(void)
{
	char str[] = "abc";
	Permutation(str, str);
	getchar();
	return 0;
}