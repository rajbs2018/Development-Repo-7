#include<stdio.h>

int Strlen(char *str)
{
	static int iCnt = 0;
	if(*str != '\0')
	{
		iCnt++;
		str++;
		Strlen(str);
	}
	return iCnt;
}

int main()
{
	int iRet = 0;
	char Arr[20];
	
	printf("Enter a string \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = Strlen(Arr);
	
	printf("Length of string is : %d\n",iRet);
	
	return 0;
}