//    prime nos={3,5,7,11,13,17,19,23,29,31....}
//
#include <stdio.h>
#include <math.h>
int isprime();
int isprime(int x)
{
    int i, k, z = 0;
    k = (int)sqrt(x);
    for (i = 2; i <= k; i++)
    {
        if (x % i == 0)
        {
           return 1;
           break;
        }
    }
}
int main()
{
    int l, d;
    printf("Enter the number\n");
    scanf("%d", &l);
    d = isprime(l);
    if (d == 1)
    {
        printf("The number is not prime\n");
    }
    else
    {
        printf("The number is prime\n");
    }
    return 0;
}
