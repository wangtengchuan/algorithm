#pragma once
class Fib
{
private:
	__int64 f, g;
public:
	__int64 get(int n)
	{
		g = 0;
		f = 1;
		while (1<n--)
		{
			f = f+g;
			g = f-g;
		}
		return g;
	}
};