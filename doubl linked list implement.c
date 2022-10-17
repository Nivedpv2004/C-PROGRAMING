#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *prev;
	struct node *next;
}node;

node *start,*temp,*ptr;
void insertFirst()
{
	int num;
	temp=(node*)malloc(sizeof(node));
	printf("Enter the data ");
	scanf("%d",&num);
	temp->data=num;
	temp->prev=NULL;
	temp->next=NULL;
	
	if(start==NULL)
	 start=temp;
	else
	{
		temp->next=start;
		start->prev=temp;
		start=temp;
		
	}
}
void insertLast()
{
	int num;
	temp=(node*)malloc(sizeof(node));
	printf("Enter the data ");
	scanf("%d",&num);
	temp->data=num;
	temp->prev=NULL;
	temp->next=NULL;
	
	if(start==NULL)
	 start=temp;
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		 ptr=ptr->next;
		
		ptr->next=temp;
		temp->prev=ptr;
	}
}
void deleteFirst()
{
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else
	{
		start=start->next;
		start->prev=NULL;
	}
}
void deleteLast()
{
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else if(start->next==NULL)
	 start=NULL;
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		 ptr=ptr->next;
		
		ptr=ptr->prev;
		ptr->next->prev=NULL;//optional
		ptr->next=NULL;
	}
}

void searchInsert()
{
	int snum,f=0,num;
	if(start==NULL)
	  printf("\n List Empty ");
	else
	{
		printf("Enter the number : ");
		scanf("%d",&snum);
		
		f=0;
		ptr=start;
		while(ptr!=NULL)
		{
			if(ptr->data==snum)
			{
				f=1;
				break;
			}
			ptr=ptr->next;
		}
		if(f==1)
		{
			temp=(node*)malloc(sizeof(node));
			printf("Enter the data ");
			scanf("%d",&num);
			temp->data=num;
			
			temp->next=ptr->next;
			temp->prev=ptr;
			ptr->next->prev=temp;
			ptr->next=temp;
			
		}
		else
		 printf("\n Number not present ");
	}
}
void searchDelete()
{
	int snum,f=0,num;
	if(start==NULL)
	  printf("\n List Empty ");
	else
	{
		printf("Enter the number : ");
		scanf("%d",&snum);
		
		f=0;
		ptr=start;
		while(ptr!=NULL)
		{
			if(ptr->data==snum)
			{
				f=1;
				break;
			}
			ptr=ptr->next;
		}
		if(f==1)
		{
			ptr->next->prev=ptr->prev;
			ptr->prev->next=ptr->next;
		}
		else
		 printf("\n Number not present ");
	}
}
void display()
{
	if(start==NULL)
	 printf("\n List empty ");
	else
	{
		ptr=start;
		while(ptr!=NULL)
		{
			printf("\n %d",ptr->data);
			ptr=ptr->next;
		}
	}
}
void main()
{
	int ch;
	start=NULL;
	while(1)
	{
		printf("\n 1 for Insert First ");
		printf("\n 2 for Insert Last ");
		printf("\n 3 for Search Insert ");
		printf("\n 4 for Delete First ");
		printf("\n 5 for Delete Last ");
		printf("\n 6 for Search Delete ");
		printf("\n 7 for Display ");
		printf("\n 8 for Exit ");
		printf("\n\n Enter choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			insertFirst();
			display();
			break;
			
			case 2:
			insertLast();
			display();
			break;
			
			case 3:
			searchInsert();
			display();
			break;
			
			case 4:
			deleteFirst();
			display();
			break;
			
			case 5:
			deleteLast();
			display();
			break;
			
			case 6:
			searchDelete();
			display();
			break;
			
			case 7:
			display();
			break;
			
			case 8:
			exit(1);
			
			default:
			printf("\n Opps! Wrong  choice ");
		}
	}
}
