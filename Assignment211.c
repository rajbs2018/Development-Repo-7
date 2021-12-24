#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0 , iRet = 0;
	char Fname[30];
	char Data[10];
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unavle to create File\n");
	}
	else
	{
		printf("File Succesfully opened with fd: %d",fd);
	}
	

	return 0;
}
