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
    char prefix[30];
    printf("\nEnter the prefix expression: ");
    scanf("%s",prefix);
    printf("\nAfter Evaluation of prefix: ");
    float val = eval_postfix(prefix);
    printf("%.1f",val);
}
int eval_postfix(char prefix[])
{
  float num1,num2,value; 
  int i = strlen(prefix)-1;
  while(i >= 0)
  {
    if(isdigit(prefix[i]))
    {
      push(st, (float)(prefix[i]-'0'));
    }
    else
    {
      num1=pop();
      num2=pop();
      switch(prefix[i])
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
    i--;
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