#include<iostream>
#include<stdio.h>
using namespace std;

void Display()
{
	static int iCnt = 5, i = 1;
	
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