#include<stdio.h>
#include<malloc.h>
typedef struct node
{
  int data;
  int priority;
  struct node *next;
}pqueue;
pqueue *start = NULL;
void insert();
void display();
void delete();
void main()
{
  int ch;
      do
      {  
       printf("\n*******MAIN MENU********\n1. Insert\n2. Delete\n3. Display\n4. Exit");
       printf("\nEnter your choice: ");
       scanf("%d",&ch);
       switch(ch)
       {
        case 1:
              insert();
              break;
        case 2:
              delete();
              break;
       case 3:
              display();
              break;
       }
      }while(ch != 4);
}
void insert()
{
  int data,pri;
  pqueue *ptr,*temp;
  ptr=(pqueue *)malloc(sizeof(pqueue));
  printf("\nEnter the data and priority: ");
  scanf("%d %d",&data,&pri);
  ptr->data=data;
  ptr->priority=pri;
  if(start == NULL || pri < start->priority)
  {
    ptr->next=start;
    start=ptr;
  }
  else
  {
    temp=start;
    while(temp->next != NULL && temp->next->priority <= pri )
        temp=temp->next;
    ptr->next=temp->next;
    temp->next=ptr;
  }
}
void delete()
{
  pqueue *ptr;
  if(start==NULL)
   printf("\nNo elements present");
  else
  {
    ptr=start;
    start=ptr->next;
    printf("|%d|%d| is deleted",ptr->data,ptr->priority);
    free(ptr);
  }
}
void display()
{
  pqueue *ptr=start;
  if(start==NULL)
  {
    printf("\nNo element is present");
  }
  else
  {
    printf("\nPriority Queue elements are: ");
    while(ptr!=NULL)
    {
      printf("|%d|%d|-->",ptr->data,ptr->priority);
      ptr=ptr->next;
    }
  }
}
