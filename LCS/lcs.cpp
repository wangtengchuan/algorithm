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
��һ�������ǲ��ö�̬�滮�ķ����������ǰ�б�������ַ���ȣ�
��ô���ǵ�ֵ�͵�����ԽǼ�1��������ȣ��͵����������ϲ������*/
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

/*�ڶ��ַ�������Hash�����ķ���*/
int lcs2(const string &str1, const string &str2)
{

}