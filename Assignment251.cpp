#include<iostream>
#include<stdio.h>
using namespace std;

void Display(int iNo)
{
	if(iNo > 0)
	{
		cout<<iNo<<"\t"<<"*\t";
		iNo--;
		Display(iNo);
	}
}

int main()
{
	int iValue = 0;
	cout<<"Enter a Number \n";
	cin>>iValue;
	Display(iValue);
	return 0;
}