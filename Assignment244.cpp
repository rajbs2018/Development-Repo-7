#include<iostream>
#include<stdio.h>
using namespace std;

void Display()
{
	static char iCnt = 'F', i = 'A';
	
	if(i <= iCnt)
	{
		cout<<i<<"\t";
		i++;
		Display();
	}
}

int main()
{
	Display();
	return 0;
}