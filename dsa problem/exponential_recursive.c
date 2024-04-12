#include<stdio.h>
int exponent(int,int);
void main()
{
    int n1,n2;
    printf("\nThe the number and its exponential to find: ");
    scanf("%d %d",&n1,&n2);
    int val = exponent(n1,n2);
    printf("\nThe exponent of %d^%d is: %d",n1,n2,val);
}
int exponent(int n1,int n2)
{

    if(n2 == 0)
        return 1;
    else
        return n1*exponent(n1,n2-1);

}