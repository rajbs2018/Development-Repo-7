#include<iostream>
#include<stdio.h>
using namespace std;

int WhiteSpace(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if(*str ==' ')
		{
			iCnt++;
		}
		str++;
		WhiteSpace(str);
	}
	
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string\n";
	scanf("%[^'\n']s",Arr);
	
	iRet = WhiteSpace(Arr);

    cout<<"Whitespaces of String is :"<<iRet<<"\n";	
	
	return 0;
}