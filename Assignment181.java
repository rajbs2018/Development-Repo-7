import java.util.*;

class Assignment181
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
		int iCnt = 0,iCnt1 = 0, iCnt2 = 0;
		for(iCnt1 = 0; iCnt1 < iRow ; iCnt1++)
		{
			for(iCnt2 = 0 ;iCnt2 < iCol ; iCnt2++)
			{
				System.out.print("*\t");
							
			}
			
		System.out.println();	
			
		}
	}
}