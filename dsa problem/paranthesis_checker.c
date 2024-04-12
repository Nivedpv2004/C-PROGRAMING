#include<stdio.h>
#include<string.h>
#define max 20
int stk[max],top=-1,flag=1,temp;

void push(char val)
{
    if(top == max-1)
      printf("\nStack overflow");
    else
       stk[++top] = val;
}
int pop()
{
    if(top == -1)
     printf("\nunderflow");
    else
      return(stk[top--]);
}

void main()
{
    char exp[max];
    printf("\nEnter the expression: ");
    scanf("%s",exp);
    for(int i=0;i<strlen(exp);i++)
    {
      if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
      {
        push(exp[i]);
      }
      if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
      {  
        if(top == -1)
            flag=0;
        else
        {
           temp=pop();
           printf("%c",temp);
           if((exp[i] == ')' && temp =='(') ||(exp[i] == '}' && temp =='{') ||(exp[i] == ']' && temp =='['))
             flag=1;
           else
           {
             flag=0;
             break; // because without break [[(])]
           }      
        }
      }
    }
    if(top >=0)  //([]
     flag=0;
    if(flag == 1)
    printf("\nValid parenthesis");
    else
    printf("\nInvalid parenthesis");
}