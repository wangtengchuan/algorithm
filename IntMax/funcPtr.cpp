/*下面部分主要是展示函数指针的用法，关于函数指针，详细参考《C与指针》*/
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
int compareInt(const void *a, const void *b)
{
	return *(const int *)a - *(const int *)b;
}
//int main()
//{
//	int items[] = {1,2,3,4};
//	qsort(items, sizeof(items) / sizeof(items[0]), sizeof(items[0]), compareInt);
//	for (int i = 0; i < sizeof(items) / sizeof(items[0]); i++)printf("%d",items[i]);
//	system("pause");
//	return 0;
//}
class IntComparator
{
public:
	bool operator()(const int &a, const int &b)
	{
		return a < b;
	}
};
template <typename RandomIter,class Compare>
void sort(RandomIter first, RandomIter last, Compare comp);


template<typename T>
class Negtive
{
public:
	T operator()(T n){ return -n; }
};
template<typename T>
void Callback(T n, Negtive &neg)
{
	T val = neg(n);
	std::cout << val << endl;
}

int main()
{
	/*std::vector<int> items{ 4, 3, 2, 1 };
	std::sort(items.begin(), items.end(), IntComparator());
	for (int i = 0; i < items.size(); i++)std::cout << items[i] << std::endl;*/
	Negtive<int> neg;
	int n = 5;
	Callback(n, neg);
	system("pause");
	return 0;
}