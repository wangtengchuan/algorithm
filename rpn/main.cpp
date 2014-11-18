#include <stdio.h>
int main()
{
	char buf[20];
	int n, a = 3, b = 7;
	n = sprintf(buf, "%5d",a);
	printf("%s\n", buf);
	getchar();
	return 0;
}