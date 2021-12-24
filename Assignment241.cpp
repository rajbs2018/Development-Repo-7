#include<iostream>
#include<stdio.h>
using namespace std;

void Display()
{
	static int iCnt = 5;
	
	if(iCnt != 0)
	{
		cout<<"*\t";
		iCnt--;
		Display();
	}
}

int main()
{
	Display();
	return 0;
}