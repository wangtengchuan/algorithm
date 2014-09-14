#include "kmp.h"
using namespace std;
int main()
{
	string str="abcab";
	string substr="ab";
	cout<<KMP(str,substr)<<endl;
	system("pause");
	return 0;
}