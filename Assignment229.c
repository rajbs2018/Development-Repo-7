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

int SecMaximum(PNODE Head)
{
	int iValue = Head -> data;
	int iNo = 0;
	while(Head != 0)
	{
		if(iValue < Head -> data)
		{
			iNo = iValue;
			iValue = Head -> data;
		}
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
	
	InsertFirst(&first,5);
	InsertFirst(&first,70);
	InsertFirst(&first,30);
	InsertFirst(&first,50);
	InsertFirst(&first,40);
	InsertFirst(&first,30);
	InsertFirst(&first,20);
	InsertFirst(&first,10);
	
	Display(first);
	
	
	iRet = SecMaximum(first);
	printf("secound maximum number from linked list : %d\n",iRet);
	
	Display(first);
	
	return 0;
}