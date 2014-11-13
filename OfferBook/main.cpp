//#include "overloadFun_A.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> vec;
	vector<int>::iterator iter;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);
	vec.push_back(10);
	for (iter = vec.begin(); iter != vec.end(); iter++)
	{
		if (*iter == 10)
			iter=vec.erase(iter);
		if (iter == vec.end())break;
	}
	for (iter = vec.begin(); iter != vec.end(); iter++)cout << " " << *iter;
	cout << endl;
	getchar();
	return 0;
}