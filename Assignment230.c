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

int SumDigit(PNODE Head)
{
	int iNo = 0 ,iDigit = 0, iSum = 0;
	int iValue = Head -> data;
	while(Head != 0)
	{
		while(Head -> data != 0)
		{
			iDigit = Head -> data % 10;
			iSum = iSum + iDigit;
			Head-> data = Head -> data / 10;
		}
		printf("%d\t",iSum);
		iSum = 0;
		Head = Head-> next;
	}
	return iNo;
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
	
	InsertFirst(&first,640);
	InsertFirst(&first,240);
	InsertFirst(&first,20);
	InsertFirst(&first,230);
	InsertFirst(&first,110);
	
	Display(first);
	
	
	SumDigit(first);
	
	return 0;
}