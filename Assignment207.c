#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int CountSmall(char Fname[])

{
		int fd = 0;
		int iRet = 0,i = 0,iCnt = 0;
		char Buffer[10];
		
		fd = open(Fname,O_RDWR);
		
		if(fd == -1)
		{
			printf("Unable to open file\n");
			return -1;
		}
		
		printf("Data from file is : \n");
		
		while((iRet = read(fd,Buffer,10))!= 0)
		{
			for(i = 0; i < iRet; i++)
			{
				if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
				{
					iCnt++;
				}
			}
		}
	return iCnt;
	
	close(fd);
	
}

int main()
{
	char FileName[30];
	int iRet = 0;
	
	printf("Enter file name :\n");
	scanf("%s",FileName);
	
	iRet = CountSmall(FileName);
	printf("Number of small character are %d ",iRet);
	
	return 0;
}


