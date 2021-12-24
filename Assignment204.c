#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;
	char Fname[30];
	char Data[7];
	
	printf("Enter file name: \n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to OPEN file the file\n");
		return -1;
	}
	else 
	{
		printf("File succesfully opened with fd : %d \n", fd);
	
	}
	
	iRet = (fd,Data,7);
	printf("%d bytes data of file ", iRet);
	printf("Data from the file is : %s\n",Data);
	
	return 0;
}