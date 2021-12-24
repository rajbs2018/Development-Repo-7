import java.util.*;

class Assignment197

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
		
		for(iCnt1 = 1; iCnt1 <= iRow ; iCnt1++)
		{
			for(iCnt2 = iCol ; iCnt2 > 0 ; iCnt2--)
			{
				
				if( iCnt1 == iCnt2)
				{
					System.out.print("# \t");
				}
				else if(iCnt1 < iCnt2)
				{
					System.out.print("* \t");
				}
				else 
				{
					System.out.print("@ \t");
				}
			}	
			System.out.println();
		}
			
	}
}