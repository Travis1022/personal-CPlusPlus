#include "Match.h"
using namespace std;

CMatch::CMatch()
{
	//���캯��
}

CMatch::~CMatch(){
	//��������
}




bool CMatch::MatchString(char* pMotherString, int iMotherStringLen, char* szSubString, int iSubStringLen)
{

	if (iMotherStringLen < iSubStringLen)
	{
		return false;
	}

	for (int index = 0; index < iSubStringLen; index++)
	{
		if (pMotherString[index] != szSubString[index])
		{
			return false;
		}
	}
	return true;
}

char* CMatch::ReplaceString(char* pRawString, char* pSubString, char* pReplaceString)
{
	int iRawStringLen = strlen(pRawString);
	int iSubStringLen = strlen(pSubString);
	int iBufferIndex = 0;
	char cStringBuffer[512] = { '\0' };
	string sTempString;

	for (int index = 0; index < iRawStringLen; index++)
	{

		if (!MatchString(pRawString + index, iRawStringLen - index, pSubString, iSubStringLen))
		{
			//��������¼ƥ�䴮֮ǰ���ַ���
			cStringBuffer[iBufferIndex] = pRawString[index];
			iBufferIndex++;
			continue;
		}


		//ƥ��ɹ��������ʱ����,ƥ��ɹ���Ҫ��buffer������ַ�����ֹ����������������ַ�
		cStringBuffer[iBufferIndex + 1] = '\0'; 
		sTempString = sTempString + cStringBuffer + pReplaceString;
		iBufferIndex = 0;
		index += iSubStringLen - 1;
	}

	cStringBuffer[iBufferIndex] = '\0';
	sTempString += cStringBuffer;

	char* NewString = new char[sTempString.size()];

	return strcpy(NewString, sTempString.c_str());


}
