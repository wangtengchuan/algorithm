/*��д��ֵ�����������Ҳ����overwrite ��()������*/
#pragma once
#include <stdio.h>
#include <string.h>
class CMyString
{
private:
	char *m_pData;
public:
	CMyString(){};
	CMyString(char *pData = NULL)
	{ 
		m_pData = pData; 
	};
	CMyString(const CMyString &str){};
	~CMyString();
	CMyString& operator =(const CMyString& str)
	{
		if (this == &str)
			return *this;
		delete[] m_pData;
		m_pData = NULL;
		m_pData = new char[strlen(str.m_pData) + 1];
		strcpy(m_pData,str.m_pData);
		return *this;
	}
};