import java.util.*;

class Assignment178
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iRow = 0, iCol = 0;
		
		System.out.println("Enter Row : ");
		iRow = sobj.nextInt();
		
		System.out.println("Enter number of colomn : ");
		iCol = sobj.nextInt();
		
		Pattern pobj = new Pattern();
		pobj.Display(iRow , iCol);
			
		
	}
}

class Pattern
{
	public void Display(int iRow , int iCol)
	{
		int iCnt1 = 0, iCnt2 = 0;
		char ch;
		for(iCnt1 = 1,ch ='A'; iCnt1 <= iRow ; iCnt1++,ch++)
		{
			for(iCnt2 = 1;iCnt2 <= iCol ; iCnt2++)
			{
				
				System.out.print(" \t" +ch);
							
			}
			
		System.out.println();	
			
		}
	}
}