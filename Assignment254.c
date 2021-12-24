#include<stdio.h>

int Fact(int iNo)
{
	static int iDigit = 0,iMul =1;
	if(iNo > 0)
	{
		iMul = iMul * iNo;
		iNo--;
		Fact(iNo);
	}
	return iMul;
}

int main()
{
	int iValue = 0,iRet = 0;
	printf("Enter a Number \n");
	scanf("%d",&iValue);
	iRet = Fact(iValue);
	printf("Product of Number is : %d",iRet);
	return 0;
}