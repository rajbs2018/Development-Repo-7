#include<iostream>
#include<stdio.h>
using namespace std;

int Max(int iNo)
{
	static int iCnt = 0, iDigit = 0, iNum =0;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iNum < iDigit)
		{
			iNum = iDigit;
		}
		iNo = iNo / 10;
		Max(iNo);
	}
	
	return iNum;
}

int main()
{
	int iRet = 0, iValue = 0;
	
	cout<<"Enter Number\n";
	scanf("%d",&iValue);
	
	iRet = Max(iValue);

    cout<<"Largest Number is :"<<iRet<<"\n";	
	
	return 0;
}