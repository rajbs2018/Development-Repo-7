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

int FirstOccurrence(PNODE Head,int iNo)
{
	int iCnt = 0;
	while(Head != 0)
	{
		if(Head -> data == iNo)
		{
			iCnt++;
			break;
		}
		iCnt++;
		Head = Head-> next;
	}
	return iCnt;
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
	int iRet = 0, iValue = 0;
	
	InsertFirst(&first,70);
	InsertFirst(&first,30);
	InsertFirst(&first,50);
	InsertFirst(&first,40);
	InsertFirst(&first,30);
	InsertFirst(&first,20);
	InsertFirst(&first,10);
	
	Display(first);
	
	printf("Enter a element to search : \n");
	scanf("%d",&iValue);

	
	iRet = FirstOccurrence(first,iValue);
	printf("First occurrence of element : %d\n",iRet);
	
	Display(first);
	
	return 0;
}