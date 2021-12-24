#include<iostream>
#include<stdio.h>
using namespace std;

void Display(int iNo)
{
	static int i = 1;
	if(iNo >= i)
	{
		cout<<iNo<<"\t";
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