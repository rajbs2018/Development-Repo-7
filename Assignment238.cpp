#include<iostream>
#include<stdio.h>
using namespace std;

int Small(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if((*str >='a') && (*str <= 'z' ))
		{
			iCnt++;
		}
		str++;
		Small(str);
	}
	
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string\n";
	scanf("%[^'\n']s",Arr);
	
	iRet = Small(Arr);

    cout<<"Whitespaces of String is :"<<iRet<<"\n";	
	
	return 0;
}