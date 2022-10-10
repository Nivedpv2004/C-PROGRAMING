//program to find the factorial of  a number
#include<stdio.h>
int main()
{
    int a;
    int n=1;
    printf("Enter number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        n=n*i;
    }
    printf("Factorial=%d",n);

}
