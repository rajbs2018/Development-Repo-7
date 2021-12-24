#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head , int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> next = NULL;
	newn -> data = no;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else 
	{
		newn -> next = *Head;
		*Head = newn;
	}
}

int SmallDig(PNODE Head)
{
	int iNo = 0 ,iDigit = 0, iMul = 10, iNum = 0;
	int iValue = Head -> data;
	while(Head != 0)
	{
		while(Head -> data != 0)
		{
			iDigit = Head -> data % 10;
			
			if(iMul > iDigit)
			{
				iMul = iDigit;
			}	
			Head-> data = Head -> data / 10;
		}
		
		printf("%d\t",iMul);
		iMul =10;
		Head = Head-> next;
	}
	return 0;
}

void Display(PNODE Head)
{
	while(Head != 0)
	{
		printf("%d\t",Head->data);
		Head = Head->next;
	}
	printf("\n");
}
int main()
{
	PNODE first = NULL;
	int iRet = 0;
	
	InsertFirst(&first,641);
	InsertFirst(&first,240);
	InsertFirst(&first,21);
	InsertFirst(&first,230);
	InsertFirst(&first,111);
	
	Display(first);
	
	
	SmallDig(first);
	
	return 0;
}