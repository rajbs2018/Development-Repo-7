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

void DisplayPrime(PNODE Head)
{
	printf("Prime Number from Linked list is : \n");
	
	while(Head != 0)
	{
		if((Head ->data) % 2 != 0)
		{
			printf("%d\t",Head ->data);
		}
		Head = Head-> next;
	}
	printf("\n");
	
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
	
	InsertFirst(&first,89);
	InsertFirst(&first,6);
	InsertFirst(&first,41);
	InsertFirst(&first,17);
	InsertFirst(&first,28);
	InsertFirst(&first,11);
	
	Display(first);
	
	
	DisplayPrime(first);
	
	return 0;
}