#pragma once
#include <stdio.h>
class CMyString
{
private:
	char *m_pdata;
public:
	CMyString(char *pData = NULL){};
	CMyString(const CMyString &str);
	~CMyString();
	CMyString& operator =(const CMyString& str)
	{
		if (this == &str)
			return *this;
	}
};