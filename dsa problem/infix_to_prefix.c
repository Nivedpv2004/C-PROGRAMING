#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAX 40
char st[MAX],temp[30];
int top =-1;
void conversion(char *,char *);
char pop(char *);
void push(char *,char);
int precedence(char);
void reverse(char *);
void main()
{
    char infix[30],postfix[30];
    printf("\nEnter the infix expression: ");
    scanf("%s",infix);

    reverse(infix);
    conversion(temp,postfix);
    printf("\nThe corresponding postfix expression is: ");
    printf("%s",postfix);
  
    reverse(postfix);
    printf("\nThe prefix expression is: ");
    printf("%s",temp);
}
void reverse(char infix[])
{
  int i=0;
  int j=strlen(infix)-1;
  while(j>=0)
  {
    if(infix[j] == '(')
      temp[i]=')';
    else if(infix[j] == ')')
      temp[i]='(';
    else
      temp[i]=infix[j];
    i++,j--;
  }
  temp[i]='\0';
}

void conversion(char infx[],char post[])
{
  strcpy(post,"");
  printf("%s",infx);
  int i=0,j=0;
  char temp;
  while(infx[i] != '\0')
  {
    if(infx[i] == '(')
    {
      push(st,infx[i]);
      i++;
    }
    else if(infx[i] == ')')
    {
        while((top != -1) && (st[top] != '('))
        {
          post[j]=pop(st);
          j++;
        }
        if(top == -1)
        {
            printf("\n Incorrect expression");
            exit(1);
        }
        temp = pop(st);
        i++;
    }
    else if(isalpha(infx[i]) || isdigit(infx[i]))
    {
      post[j]= infx[i];
      j++;
      i++;
    }
    else if(infx[i] == '+' || infx[i] == '-' || infx[i] == '/' || infx[i] == '*' || infx[i] == '%')
    {
      while((precedence(st[top]) >= precedence(infx[i])) && (top != -1) && (st[top] != '(' ))
      {
        post[j] = pop(st);
        j++;
      }
      push(st,infx[i]);
      i++;
    }
    else
    {
     printf("\nElement is invalid");
     exit (1);
    }  
  }
  while((top != -1) && (st[top] != '('))
  {
    post[j]= pop(st);
    j++ ; 
  }
  post[j]='\0';

}
void push(char st[],char ch)
{
    if(top == MAX-1)
       printf("\n Stack overflow");
    else 
      st[++top]=ch;
}
char pop(char st[])
{
   char val;
   if(top == -1)
     printf("\n Stack underflow");
   else
   {
    val = st[top];
    top--;
   }
   return val;
}
int precedence(char op)
{
   if(op == '%' || op == '*' || op == '/')
    return 1;
   else if(op == '+' || op == '-')
    return 0;
}
