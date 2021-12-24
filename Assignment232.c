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

int Palindrom(PNODE Head)
{
	int iNo = 0 ,iDigit = 0, iMul = 0, iNum = 0;
	int iValue = Head -> data;
	while(Head != 0)
	{
		iNum = Head -> data;
		
		while(Head -> data != 0)
		{
			iDigit = Head -> data % 10;
			iMul = iMul * 10 + iDigit;
			Head-> data = Head -> data / 10;
		}
		
		if(iNum == iMul)
		{
			printf("%d\t",iMul);
		}
		iMul = 0;
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
	
	InsertFirst(&first,640);
	InsertFirst(&first,242);
	InsertFirst(&first,20);
	InsertFirst(&first,232);
	InsertFirst(&first,110);
	
	Display(first);
	
	
	Palindrom(first);
	
	return 0;
}