#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    int *S;
};

// Create a stack
void create (struct Stack *st)
{
    printf ("Enter Size: ");
    scanf ("%d", &st->size);
    st->top=-1;
    st->S=(int *)malloc(st->size*sizeof(int)); 
}

// Display the stack
void Display (struct Stack st)
{
    int i;
    printf ("Elements in the stack: ");
    for (i=st.top; i>=0; i--)
        printf ("%d ",st.S[i]);
    printf ("\n");
}

// Push/Inserting values in the stack
void push (struct Stack *st, int x)
{
    if(st->top==st->size-1)
        printf ("Stack overflow\n");
    else
    {
        st->top++;
        st->S[st->top]=x;
    }
}

// Pop/Deleting values from the stack
int pop (struct Stack *st)
{
    int x = -1;
    if(st->top==-1)
        printf ("Stack Underflow\n");
    else
    {
        x = st->S[st->top--];
    }
    return x;
}

// peek a value from the stack
int peek (struct Stack st, int index)
{
    int x = -1;
    if(st.top-index+1 < 0)
        printf ("Invalid Index\n");
    x = st.S[st.top-index+1];

    return x;
}

// check if the stack is empty
int isEmpty (struct Stack st)
{
    if(st.top==-1)
        return -1;
    return 0;
}

// check if the stack is full
int isFull (struct Stack st)
{
    return st.top==st.size-1;
}

// show value at the top of the stack
int stackTop (struct Stack st)
{
    if(!isEmpty(st))
        return st.S[st.top];
    return -1;
}

int main()
{
    struct Stack st;
    create(&st);

    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);

    printf ("Value deleted: %d\n",pop(&st));
    printf ("Value deleted: %d\n",pop(&st));

    printf("Peeked Value: %d\n",peek(st,2));

    printf ("Value at the top of stack: %d\n",stackTop(st));

    Display(st);

    return 0;
}