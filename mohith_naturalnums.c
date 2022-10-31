#include <stdio.h>

void naturalnums(int n)
{
    if (n==1)
        printf("%d ",n);
    else
    {
        naturalnums(n-1);
        printf("%d ",n);
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Printing %d natural numbers: ",n);
    naturalnums(n);
}
