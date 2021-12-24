#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0 , iRet = 0 ,isum = 0;
	char Fname[30];
	char Arr[] = "Hello World";
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to create File\n");
	}
	else
	{
		printf("File Succesfully opened with fd: %d\n",fd);
	}
	
	write(fd,Arr,11);
	
	close(fd);
	
	return 0;
}
