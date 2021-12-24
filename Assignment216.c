#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

int CountCapital(char FName[])
{
	int fd = 0 , i = 0,iCnt = 0 , iRet = 0; 
	char Buffer[10];
	fd = open(FName,O_RDONLY);
	
	while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
	{
		for(i = 0; i < iRet ; i++)
		{
			if((Buffer[i] >= 'A') && (Buffer[i] <='Z'))
			{
				iCnt++;
			}
		}
	}
	return iCnt;
}

int main()
{
	char FileName[30];
	int iRet = 0;
	
	printf("Enter file nem\n");
	scanf("%s",FileName);
	
	iRet = CountCapital(FileName);
	
	printf("Number of capital character is : %d \n",iRet);
	
	return 0;
	
}