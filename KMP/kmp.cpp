/*KMP algorithm is aimed for string match, 
which can determine whether the given string is the substring of another string.
For more information, you can refer to 
http://www.ruanyifeng.com/blog/2013/05/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm.html
*/
#include "kmp.h"
using namespace std;
int KMP(string str, string substr)
{
	if(str.empty()&&!substr.empty())
	{
		cout<<"error,empty string"<<endl;
		return -1;
	}
	else if(!str.empty()&&substr.empty())return 0;
	for(int i=0,j=0;i<str.length();)
	{ 
		while (str[i] != substr[0])i++;
		if (str[i] == substr[j] && i < str.length()&&j<substr.length())
		{
			i++;
			j++;
			if(j==substr.length()-1) 
			{
				cout<<"Is substr"<<endl;
				return 1;
			}
		}
		else
		{
			i+=j-MatchValue(substr,j-1);
			j=0;	
		}
	}
	return 0;
}
/*The MatchValue function returns the match value of the string
when the position of the char is given*/
int MatchValue(string subStr,int n)
{
	int equal=0;
	for(int i=0;i<n;i++)
	{
		string strForw=subStr.substr(0,i+1);
		string strBack=subStr.substr(n-i,i+1);
		if(strForw==strBack)equal=i+1;
	}
	return equal;
}