#ifndef _Match_H_
#define _Match_H_

#include "string"
#include "iostream"

class CMatch
{
public: 
	CMatch();
	~CMatch();

	bool CMatch::MatchString(char *cMotherString, int iMotherStringLen, char *szSubString, int iSubStringLen);
	
	char* CMatch::ReplaceString(char * pRawSDP, char *SubString, char *ReplaceString);
protected:

private:
};

#endif