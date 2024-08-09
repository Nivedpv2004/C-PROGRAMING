#include<stdio.h>
#define MAX 5
int deque[MAX];
int left=-1,right=-1;
void Input_restriction();
void output_restriction();
void insert_right();
void insert_left();
void delete_right();
void delete_left();
void display();
void main()
{
  int ch;
  printf("***********MAIN MENU**********");
  printf("\n1.Input restriction");
  printf("\n2.Output restriction");
  printf("\nEnter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
          Input_restriction();
          break;
    case 2:
          output_restriction();
          break;
  }
}
void Input_restriction()
{
  int ch;
  do
  {
  printf("\n***INPUT RESTRICTED DEQUE***");
  printf("\n1.insert at right\n2.Delete from left\n3.Delete from right\n4.Display\n5.Exit");
  printf("\nEnter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
          insert_right();
          break;
    case 2:
          delete_left();
          break;
    case 3:
          delete_right();
          break;
    case 4:
          display();
          break;
  }
  }while(ch!=5);
}
void output_restriction()
{
  int ch;
  do
  {
  printf("\n***OUTPUT RESTRICTED DEQUE***");
  printf("\n1.insert at right\n2.insert at left\n3.Delete from left\n4.Display\n5.Exit");
  printf("\nEnter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
          insert_right();
          break;
    case 2:
          insert_left();
          break;
    case 3:
          delete_left();
          break;
    case 4:
          display();
          break;
  }
  }while(ch!=5);
}
void insert_right()
{
  int val;
  printf("\nEnter the value to added: ");
  scanf("%d",&val);
  if((left==0 && right==MAX-1)||(left==right+1))
  {
    printf("\nQueue Overflow");
  }
  else if(left == -1 && right == -1)
  {
    left=right=0;
    deque[right]=val;
  }
  else if(left != 0 && right == MAX-1)
  {
    right=0;
    deque[right]=val;
  }
  else if(right==left-1)
  {
    printf("\nQueue Overflow");
   
  }
  else
  {
    right++;
    deque[right]=val;
    
  }
}
void insert_left()
{
  int val;
  printf("\nEnter the value to added: ");
  scanf("%d",&val);
 if((left==0 && right==MAX-1) || (right == left-1))
  printf("\nQueue overflow");
 else
 {
 
  if(left==-1 && right == -1)
  {
    left=right=0;
    deque[left]=val;
     printf("%d inserted sucess",val);
  }
  else 
  {
    if(left==0)
    {
      left=MAX-1;
      deque[left]=val;
    }  
    else
    {
      left=left-1;
      deque[left]=val;
    }  
  }
 }
}
void delete_left()
{
  if(left == -1 && right == -1)
    printf("\nQueue Underflow");
  else 
  {
   printf("\n%d is deleted",deque[left]);
  if(left==right)
    left=right=-1;
  else 
   if(left == MAX-1)
     left=0;
   else
    left=left+1;
  }
}
void delete_right()
{
  if(left == -1 && right == -1)
    printf("\nUnderflow");
  else
  {
    printf("\n%d is deleted",deque[right]);
    if(right==left)
     left=right=-1;
    else
     if(right==0)
      right=MAX-1;
     else
      right=right-1;
  }
}
void display()
{
  if(left==-1 && right==-1)
  {
    printf("\nQueue Underflow");
  }
  else
  {
    printf("\nThe element of queue are: ");
    if(left<=right)
    {
    for(int i=left;i<=right;i++)
      printf("%d\t",deque[i]);
    }
    else
    {
    for(int i=left;i<=MAX-1;i++)
      printf("%d\t",deque[i]);
    for(int i=0;i<=right;i++)
      printf("%d\t",deque[i]);
    }     
  }
}
