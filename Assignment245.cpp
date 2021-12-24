#include<iostream>
#include<stdio.h>
using namespace std;

void Display()
{
	static char iCnt = 'f', i = 'a';
	
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