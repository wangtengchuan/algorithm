#include <iostream>
using namespace std;
int main()
{
	char *str = "Hello  world!   ";
	int p1 = 0, p2 = 0;
	for (; str[p1] != '\0';p1++)
	{
		if (str[p1] == ' ')
		{
			bool flag = 0;
			for (p2 = p1; str[p2] != '\0'; p2++)
			{
				if (str[p2] != ' ')
				{
					p1 = p2;
					flag = 1;
					break;
				}
			}
			if (!flag)
			{
				char *newChar = new char[p1 + 1];
				for (int i = 0; i < p1; i++)newChar[i] = str[i];
				newChar[p1] = '\0';
				cout << newChar << endl;
				delete[] newChar;
			}
		}
	}
	getchar();
	return 0;
}