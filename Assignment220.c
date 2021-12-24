#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

void Display(char FName[])
{
	int fd = 0, iRet = 0;
	char Buffer[12];
	
	fd = open(FName,O_RDONLY);
	
	printf("Data from file is\n");
	iRet = read(fd,Buffer,sizeof(Buffer));
	
	write(1,Buffer,iRet);
	
	close(fd);
}


int main()
{
	int fd = 0 , iRet = 0;
	char Fname[30];
	char Buffer[12];
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	Display(Fname);
	
	return 0;
}
