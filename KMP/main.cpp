#include "kmp.h"
using namespace std;
int main()
{
	string str="abcdef";
	string substr="abcde";
	cout<<KMP(str,substr)<<endl;
	system("pause");
	return 0;
}