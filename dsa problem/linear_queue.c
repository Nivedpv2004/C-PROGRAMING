#include<stdio.h>
#define MAX 20
int font=-1,rear=-1;
int queue[MAX];
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
                   break;
            case 3: 
                   val = Peek();
                   printf("\nThe value of font element is: %d",val);
                   break;
            case 4:
                   Display();
                   break;
        }  
    }while(ch != 5);
}
void insert()
{
  int num;
  printf("\nEnter the element to insert: ");
  scanf("%d",&num);
  if(rear == MAX-1)
    printf("\nQueue overflow");
  else if(rear == -1 && font == -1)
    rear=font=0;
  else
    rear = rear+1;
  queue[rear]=num;
}
int Delete()
{
    if(font==-1||font>rear)
    {
      printf("\nQueue is Empty");
      return -1;
    }
    else
    {
      int val = queue[font];
      font=font+1;
      if(font>rear)
      font=rear=-1;
      return val;
    }
}
int Peek()
{
     if(font == -1 || font>rear)
     {   
        printf("Queue is Empty");
        return -1;
     }
     else
       return(queue[font]);
}
void Display()
{
    if(font == -1 || font>rear)
     printf("Queue is Empty");
    else
    { 
      printf("\nElement of queue are: ");
      for(int i=font;i<=rear;i++)
      {
         printf("\t%d",queue[i]);
      }
    }
}