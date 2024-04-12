#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAX 40
float st[MAX];
int top =-1;
void push(float *,float);
int eval_postfix(char *);
float pop();
void main()
{
    char postfix[30];
    printf("\nEnter the postfix expression: ");
    scanf("%s",postfix);
    printf("\nAfter Evaluation of postfix: ");
    float val = eval_postfix(postfix);
    printf("%.1f",val);
}
int eval_postfix(char postfix[])
{
  int i=0;
  float num1,num2,value; 
  while(postfix[i]!='\0')
  {
    if(isdigit(postfix[i]))
    {
      push(st, (float)(postfix[i]-'0'));
    }
    else
    {
      num2=pop();
      num1=pop();
      switch(postfix[i])
      {
        case '+':
              value=num1+num2;
              break;
        case '-':
              value=num1-num2;
              break;
        case '*':
              value=num1*num2;
              break;
        case '/':
              value=num1/num2;
              break;
        case '%':
              value=(int)(num1)%(int)(num2);
              break;
      }
      push(st,value);
    }
    i++;
  }
  return st[top];
}

void push(float st[],float dig)
{
  if(top == MAX-1)
  {
    printf("Stack overflow");
  }
  else
  {
    printf("%.2f ",dig);
    st[++top]= dig;   
    // printf("%.2f ",st[top]);
  }
}
float pop()
{
  if(top == -1)
    printf("Stack Underflow");
  else
   return(st[top--]);
}