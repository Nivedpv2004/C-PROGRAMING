#include<stdio.h>
#define MAX 3
int top = -1;
void push(int *,int);
void display(int *);
void pop(int *);
int peek(int *);

int main()
{
    int st[MAX];
    int val,ch;
    do
    {
        printf("\n\n\t**************MAIN MENU***************");
        printf("\n\t1.push\n\t2.pop\n\t3.peek\n\t4.Display\n\t5.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                   printf("Enter the value to add: ");
                   scanf("%d",&val);
                   push(st,val);
                   break;
            case 2:
                   pop(st);
                   break;
            case 3:
                   val = peek(st);
                   if(val != -1)
                   printf("\nTop most value is: %d",val);
                   else
                   printf("\nStack is empty");
                   break;
            case 4:
                  display(st);
                  break;
            default:
                   printf("\nEnter valid choice");
        }
    }while(ch != 5);

    
}
void push(int a[],int val)
{
    if(top == MAX-1)
    {
        printf("\nOverflow");

    }
    else
    {
        top=top+1;
        a[top]=val;
    }
}
void pop(int st[])
{
  if(top == -1)
  {
    printf("\nUnderflow");
  }
  else
  {
    int temp =st[top];
    printf("%d is pop Successfully",temp);
    top=top-1;
  }
}

int peek(int *ptr)
{
    if(top == -1)
    {
     return -1;
    }
    else
     return(*(ptr+top));
}

void display(int a[])
{
    printf("\nElements of stack are: ");
    for(int i=top;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}