#include<stdio.h>
int GCD(int,int);
void main()
{
    int n1,n2;
    printf("\nThe the number to find GCD: ");
    scanf("%d %d",&n1,&n2);
    int val = GCD(n1,n2);
    printf("\nThe gcd of %d and %d is: %d",n1,n2,val);
}
int GCD(int n1,int n2)
{
    int rem=n2%n1;
    if(rem == 0)
        return n1;
    else
        return GCD(rem,n1);
}