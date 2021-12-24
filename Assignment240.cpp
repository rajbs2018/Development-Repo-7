#include<iostream>
#include<stdio.h>
using namespace std;

int Min(int iNo)
{
	static int iCnt = 0, iDigit = 0, iNum = 0;
	
	if(iNo != 0)
	{
		
		iDigit = iNo % 10;
		iNum = iNum * 10 + iDigit;
		iNo = iNo / 10;
		Min(iNo);
	}
	return iNum;
}

int main()
{
	int iRet = 0, iValue = 0;
	
	cout<<"Enter Number\n";
	scanf("%d",&iValue);
	
	iRet = Min(iValue);

    cout<<"Smallest Number is :"<<iRet<<"\n";	
	
	return 0;
}