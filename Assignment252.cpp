#include<iostream>
#include<stdio.h>
using namespace std;

int Display(int iNo)
{
	static int iDigit = 0,iSum =0;
	if(iNo > 0)
	{
		if(iNo != 0)
		{
			iDigit = iNo % 10;
			iSum = iSum + iDigit;
			iNo = iNo / 10;
			Display(iNo);
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0,iRet = 0;
	cout<<"Enter a Number \n";
	cin>>iValue;
	iRet = Display(iValue);
	cout<<"Product of Number is : "<<iRet;
	return 0;
}