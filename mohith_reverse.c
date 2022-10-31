#include <stdio.h>
//Recursive function to reverse a number
int sum=0;
int reverse(int n, int sum)
{
    if (n>0)
        return reverse(n/10,sum*10+n%10);
    return sum;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The reverse of %d is %d\n",n,reverse(n,0));
}
