#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node *link;
}node;
node *start,*temp, *ptr;
void insertFirst()
{
	temp=(node*)malloc(sizeof(node));  //(int*)malloc(sizeof(int))
	printf("Enter the data : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(start==NULL)
	 start=temp;
	else
	{
		temp->link=start;
		start=temp;
	}
}

void insertLast()
{
	temp=(node*)malloc(sizeof(node));  //(int*)malloc(sizeof(int))
	printf("Enter the data : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(start==NULL)
	 start=temp;
	else
	{
		ptr=start;
		while(ptr->link!=NULL)
		 ptr=ptr->link;// move to the next node
		
		ptr->link=temp;
	}
}
void searchInsert()
{
	int ch2,snum,flag;
	printf("\n 1 for Insert Before ");
	printf("\n 2 for Insert After ");
	printf("\n Enter Choice ");
	scanf("%d",&ch2);
	switch(ch2)
	{
		case 1:
		printf("Enter the search number ") ;
		scanf("%d",&snum);
		if(snum==start->data)
		 insertFirst();
		else
		{
			ptr=start;
			flag=0;
			while(ptr->link!=NULL)
			{
				if(ptr->link->data==snum)
				{
					flag=1;
					break;
				}
				ptr=ptr->link;
			}
			if(flag==0)
			 printf("\n Number not Present ");
			else
			 {
			 	temp=(node*)malloc(sizeof(node));  
				printf("Enter the data : ");
				scanf("%d",&temp->data);
			 	temp->link=ptr->link;
			 	ptr->link=temp;
			 }
		}
		break;
		case 2:
			printf("Enter the search number ") ;
			scanf("%d",&snum);
			ptr=start;
			flag=0;
			while(ptr!=NULL)
			{
				if(ptr->data==snum)
				{
					flag=1;
					break;
				}
				ptr=ptr->link;
			}
			if(flag==0)
			 printf("\n Number not Present ");
			else
			 {
			 	temp=(node*)malloc(sizeof(node));  
				printf("Enter the data : ");
				scanf("%d",&temp->data);
			 	temp->link=ptr->link;
			 	ptr->link=temp;
			 }
	   }
   }
void deleteFirst()
{
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else
	{
		printf("\n Delete element %d",start->data);
		start=start->link;
	}
}

void deleteLast()
{
	if(start==NULL)
	 printf("\n U N D E R F L O W");
	else
	{
		if(start->link==NULL)
		{
			printf("\n Delete element %d",start->data);
			start=NULL;
		}
		else
		{
			ptr=start;
			while(ptr->link->link!=NULL)
			 ptr=ptr->link;
			 
			printf("\n delete element %d",ptr->link->data);
			ptr->link=NULL;
			 
		}
	}
		
}
void searchDelete()
{
	int ch2,snum,flag;
	printf("\n 1 for Delete Before ");
	printf("\n 2 for Delete After ");
	printf("\n Enter Choice ");
	scanf("%d",&ch2);
	switch(ch2)
	{
		case 1:
		printf("Enter the search number ") ;
		scanf("%d",&snum);
		if(snum==start->data)
		 printf("\n Deletion not Possible ");
		else if(start->link->data==snum)
		 start=start->link;
		else
		{
			flag=0;
			ptr=start;
		   	while(ptr->link->link!=NULL)
		   	{
		   		if(ptr->link->link->data==snum)
		   		{
		   			flag=1;
		   			break;
				}
				ptr=ptr->link;
			}
			if(flag==0)
			 printf("\n Not Present ");
			else
			 ptr->link=ptr->link->link;
	    }
		break;
		case 2:
			printf("Enter the search number ") ;
			scanf("%d",&snum);
			ptr=start;
			flag=0;
			while(ptr->link!=NULL)
			{
				if(ptr->data==snum)
				{
					flag=1;
					break;
				}
				ptr=ptr->link;
			}
			if(flag==0)
			 printf("\n Number not Present ");
			else
			 ptr->link=ptr->link->link;
	   }
   }
void display()
{
	if(start==NULL)
	 printf("\n List Empty ");
	else
	{
		ptr=start;
		printf("\n Elements : \n");
		while(ptr!=NULL)
		{
			printf("\n %d",ptr->data);
			ptr=ptr->link;
		}
	}
}
void main()
{
	int ch;
	start=NULL;
	while(1)
	{
		printf("\n\n 1 for Insert First ");
		printf("\n 2 for Insert Last ");
		printf("\n 3 for Search Insert ");
		printf("\n 4 for Delete First ");
		printf("\n 5 for Delete Last ");
		printf("\n 7 for Display ");
		printf("\n 8 for Exit ");
		printf("\n\n Enter the choice : ");
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
			printf("\n Bapi bari ja");
		}
	}
}
