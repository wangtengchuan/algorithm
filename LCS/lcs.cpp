#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int lcs1(const string &str1, const string &str2);
int main()
{
	cout << lcs1("program", "garaempageprogram") << endl;
	system("pause");
	return 0;
}
/*The function returns the size of the longest common sub-string
using dynamic programming approach. Assume that the two string have size of m and n respectively.
第一个函数是采用动态规划的方法，如果当前判别的两个字符相等，
那么他们的值就等于左对角加1。如果不等，就等于左侧或者上侧最大者*/
int lcs1(const string &str1, const string &str2)
{
	int iSize1 = str1.size();
	int iSize2 = str2.size();
	int length = 0;
	int **iMat=new int *[iSize1 + 1];
	for (int i = 0; i <= iSize1; i++) iMat[i] = new int[iSize2 + 1];
	for (int i = 0; i < iSize1 + 1; i++)for (int j = 0; j < iSize2 + 1; j++)iMat[i][j] = 0;
	for (int i = 1; i<iSize1 + 1; i++)
	{
		for (int j = 1; j < iSize2 + 1; j++)
		{
			if (str1[i] == str2[j])	iMat[i][j] = iMat[i - 1][j - 1] + 1; 
			else iMat[i][j] = max(iMat[i - 1][j], iMat[i][j - 1]); 
		}
	}
	length=iMat[iSize1][iSize2];
	for (int i = 0; i < iSize1 + 1; i++)delete[] iMat[i];
	delete[] iMat;
	iMat = NULL;
	return length;
}

/*第二种方法采用Hash函数的方法*/
int lcs2(const string &str1, const string &str2)
{

}