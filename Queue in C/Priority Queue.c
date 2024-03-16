/*Program To Implement the Priority Queue*/

#include<stdio.h>
#include <malloc.h>
#include <conio.h>

struct node
{
	int data;
	int priority;
	struct node *next;
};

struct node *start=NULL;
struct node *insert(struct node *);
struct node *delet(struct node *);
void display(struct node *);

int main()
{
	int option;
	do
	{
		printf("\n *****MAIN MENU*****");
		printf("\n 1. INSERT");
		printf("\n 2. DELETE");
		printf("\n 3. DISPLAY");
		printf("\n 4. EXIT");
		printf("\n Enter your option : ");
		scanf( "%d", &option);
		switch(option)
		{
			case 1:
				start=insert(start);
				break;
			case 2:
				start = delet(start);
				break;
			case 3:
				display(start);
				break;
		}
	}while(option!=4);
}

struct node *insert(struct node *start)
{
	int val, pri;
	struct node *ptr, *p;
	ptr = (struct node *)malloc(sizeof(struct node));
	printf("\n Enter the value and its priority : " );
	scanf( "%d %d", &val, &pri);
	ptr->data = val;
	ptr->priority = pri;
	if(start==NULL || pri < start->priority )
	{
		ptr->next = start;
		start = ptr;
	}
	else
	{
		p = start;
		while(p->next != NULL && p->next->priority <= pri)
		p = p->next;
		ptr->next = p->next;
		p->next = ptr;
	}
	return start;
}

struct node *delet(struct node *start)
{
	struct node *ptr;
	if(start == NULL)
	{
		printf("\n UNDERFLOW" );
		return 0;
	}
	else
	{
		ptr = start;
		printf("\n Deleted item is: %d", ptr->data);
		start = start->next;
		free(ptr);
	}
	return start;
}

void display(struct node *start)
{
	struct node *ptr;
	ptr = start;
	if(start == NULL)
		printf("\nQUEUE IS EMPTY" );
	else
	{
		printf("\n PRIORITY QUEUE IS : " );
		while(ptr != NULL)
		{
			printf( "\t%d[priority=%d]", ptr->data, ptr->priority );
			ptr=ptr->next;
		}
	}
}
