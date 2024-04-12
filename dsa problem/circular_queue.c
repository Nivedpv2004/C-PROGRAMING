#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void insert();
int Peek();
void Display();
int Delete();
void main()
{
    int ch,val;
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
                   val = Delete();
                   if(val!=-1)
                    printf("\nThe delete value is: %d",val);
                   else
                    printf("\nThe queue is underflow");
                   break;
            case 3: 
                   val = Peek();
                   if(val!=-1)
                   printf("\nThe value of font element is: %d",val);
                   else
                   printf("\nEmpty Queue");
                   break;
            case 4:
                   Display();
                   break;
        }  
    }while(ch != 5);
}
void insert()
{
  int val;
  printf("Enter the value to insert: ");
  scanf("%d",&val);
  if(front==0 && rear==MAX-1)
  {
    printf("Queue is overflow");
  }
  else if(front==-1 && rear==-1)
  {
    front=rear=0;
    queue[rear]=val;
  }
  else if(rear == MAX-1 && front != 0)
  {
    rear=0;
    queue[rear]=val;
  }
  else if(rear==front-1)
  {
    printf("Queue is overflow");
  }
  else
  {
    rear++;
    queue[rear]=val;
  }
}
int Peek()
{
  if(front == -1 && rear == -1)
    return -1;
  else
    return(queue[front]);
}
int Delete()
{
  int temp;
  if(front == -1 && rear == -1)
    return -1;
  temp=queue[front];
  if(front==rear)
    front=rear=-1;
  else 
  {
    if(front == MAX-1)
      front=0;
    else
      front++;
  }
  return temp;
}
void Display()
{
  printf("\nThe element of queue are: ");
  if(front == -1 && rear == -1)
   printf("\nQueue Underflow");
  else
  {
    if(front<rear)
    {
      for(int i=front;i<=rear;i++)
      {
        printf("%d\t",queue[i]);
      }
    }
    else
    {
      for(int i=front;i<=MAX-1;i++)
        printf("%d\t",queue[i]);
      for(int i=0;i<=rear;i++)
        printf("%d\t",queue[i]);
    }
  }
}
