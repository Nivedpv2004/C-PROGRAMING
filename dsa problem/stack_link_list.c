#include<stdio.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node *next;
}stack;
stack *top=NULL;

void push(int);
void display();
void pop();
void peek();

void main()
{
    int ch,val;
    do
    {
    printf("\n\n\t**************MAIN MENU***************");
    printf("\n\t1.push\n\t2.pop\n\t3.peek\n\t4.Display\n\t5.Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
               printf("\nEnter the element to push: ");
               scanf("%d",&val);
               push(val);
               break;

        case 2:
               pop();
               printf("\nSuccessfully POP");
               break;
        case 3:
              peek();
              break;
        case 4:
              printf("\nElement of stack are: ");
              display();
              break;
        default:
               printf("\nEnter valid choice....");
    }
    }
    while(ch!=5);
}
void push(int val)
{
    stack *new_node;
    new_node =(stack*) malloc(sizeof(stack));
    new_node->data = val;
    if(top == NULL)
    {
        
        new_node->next = NULL;
        top = new_node;
    }
    else
    {
        new_node->next = top;
        top = new_node;
    }
   
}
void display()
{
    if(top==NULL)
    {
        printf("NO elements are present");
    }
    else
    {
    stack *ptr;
    ptr=top;
    while(ptr != NULL)
    {
        printf("%d-->",ptr->data);
        ptr=ptr->next;
    }
    }
}

void pop()
{
    if(top == NULL)
    {
        printf("\nUnderflow");
    }
    else
    {
    stack *ptr;
    ptr=top;
    top=top->next;
    free(ptr);
    }
  
}

void peek()
{
    printf("Top of the stack is: %d",top->data);
}