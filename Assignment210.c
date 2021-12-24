#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void DisplayN(char Fname[] , int iSize)

{
		int fd = 0;
		char Buffer[iSize];
		
		fd = open(Fname,O_RDWR);
		
		
		
		if(fd == -1)
		{
			printf("Unable to open file\n");
		}
		
		printf("Data from file is : \n");
		
		lseek(fd,0,0);
		
		read(fd,Buffer,iSize);
		
		write(1,Buffer,iSize);
			
	
	close(fd);
	
}

int main()
{
	char FileName[30];
	int iRet = 0;
	int iValue = 0;
	
	printf("Enter file name :\n");
	scanf("%s",FileName);
	
	printf("Enter number of character to display: \n");
	scanf(" %d",&iValue);
	
	 DisplayN(FileName,iValue);
	
	
	return 0;
}


