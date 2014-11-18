/*用C++的方法解决8皇后问题*/
#pragma once
#include <iostream>
#include <algorithm>
class NQueen
{
private:
	int max;
	int sum;
	int *queen;
public:
	NQueen(int i)
	{
		max = i;
		queen = new int[max];
	}

	~NQueen()
	{
		delete[] queen;
		queen = NULL;
	}

	void show()
	{
		std::cout << "( ";
		for (int i = 0; i < max; i++)
			std::cout << queen[i]<<" ";
		std::cout <<" )" <<std::endl;
		sum++;
	}

	int showSum()
	{
		return sum;
	}

	int place(int n)
	{
		for (int i = 0; i < n; i++)
		{
			if (queen[i] == queen[n] || abs(n-i) == abs(queen[i] - queen[n]))
				return 1;
		}
		return 0;
	}

	void nQueens(int n)
	{
		for (int i = 0; i < max; i++)
		{
			queen[n] = i;
			if (!place(n))
			{
				if (n == max - 1)
					show();
				else nQueens(n + 1);
			}
		}
	}
};