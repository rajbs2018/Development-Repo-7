#include<iostream>
#include<stdio.h>
using namespace std;

void Display(int iNo)
{
	static char i = 'a';
	static int j = 0;
	
	if(j <= iNo)
	{
		cout<<i<<"\t";
		j++;
		i++;
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