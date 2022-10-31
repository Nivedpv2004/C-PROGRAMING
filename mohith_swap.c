#include <stdio.h>
#define SWAP(a,b,c) c t; t=a, a=b, b=t
int main()
{
    int x=10,y=20;
    printf("Before swapping: x=%d, y=%d\n",x,y);
    SWAP(x,y,int);
    printf("After swapping: x=%d, y=%d\n",x,y);
}
