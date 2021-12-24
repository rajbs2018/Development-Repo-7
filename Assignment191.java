import java.util.*;

class Assignment191
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
				
		Pattern pobj = new Pattern();
		pobj.Accept();
		pobj.Display();
		pobj.Pat();
			
		
	}
}
class StringX
{
	public String str;
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.print("Enter String : \n");
		str = sobj.nextLine();
	}
	public void Display()
	{
		System.out.println("String is : "+str);
	}
	
}

class Pattern extends StringX
{
	public void Pat()
	{
		int iCnt1 = 0, iCnt2 = 0;
		char Arr[] = str.toCharArray();
		
		
		for(iCnt1 = 0; iCnt1 < Arr.length; iCnt1++)
		{
			for(iCnt2 = 0 ; iCnt2 < Arr.length ; iCnt2++)
			{
				if(iCnt1 > iCnt2)
				{
					char c = str.charAt(iCnt2);
					System.out.print("\t"+c);
				}
				else
				{
					System.out.print("\t"+"*");
				}
				
			}	
			System.out.println();
		}
			
	}
}

//Output of Program
/*
Enter String :
Hello
String is : Hello
        *       *       *       *       *
        H       *       *       *       *
        H       e       *       *       *
        H       e       l       *       *
        H       e       l       l       *
*/		