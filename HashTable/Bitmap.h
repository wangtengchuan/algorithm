#pragma once
#pragma warning(disable:4900 4800)
#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

class Bitmap
{
private:
	char * M;
	int N;
protected:
	void init(int n)
	{
		M = new char[N = (n + 7) / 8];
		memset(M, 0, N);
	}
};