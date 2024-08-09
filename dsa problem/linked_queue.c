#include<stdio.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node *next;
}queue;
queue *front=NULL;
queue *rear=NULL;
void insert();
void Display();
queue *Peek();
void Delete();
void main()
{
    int ch,val;
    queue *p;
    do
    {
        printf("\n*******MAIN MENU********\n1. Insert\n2. Delete\n3. Peek\n4. Display\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                   insert();
                   break;
            case 2:
                   Delete();
                   break;
             case 3: 
                    p = Peek();
                    printf("\nThe value of font element is: %d",p->data);
                    break;
            case 4:
                    printf("\nQueue contains: ");
                    Display();
                    break;
        }  
    }while(ch != 5);
} 
void insert()
{
    int val;
    queue *ptr;
    ptr=(queue*)malloc(sizeof(queue));
    printf("\nEnter the value to insert: ");
    scanf("%d",&val);
    ptr->data = val;
    if(front == NULL)
    {
        front=rear=ptr;
        front->next=rear->next=NULL;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
        rear->next=ptr;
    }
}
void Delete()
{
    queue *ptr;
    ptr=front;
    if(front == NULL)
     printf("\nQueue Underflow");
    else
    {
     front=front->next;
     printf("\nThe delete value is: %d",ptr->data);
     free(ptr);   
    } 
}
queue *Peek()
{
    if(front == NULL)
     printf("\nQueue is empty");
    else
      return(front);
}
void Display()
{
    if(front == NULL)
     printf("\nQueue is empty");
    else
    {
        queue *ptr;
        ptr=front;
        while(ptr!=rear)
        {
            printf("%d-->",ptr->data);
            ptr=ptr->next;
        }
        printf("%d",ptr->data);
    }
}