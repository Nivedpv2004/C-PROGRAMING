#include<stdio.h>
#include<math.h>
void Squareroot();

int main()
{
    double sqroot;
    Squareroot(sqroot);
    return 0;
}

void Squareroot()
{
    double n, sqroot;
    printf("Enter any number: ");
    scanf("%lf", &n);

    sqroot = sqrt(n);

    printf("The square root is: %lf", sqroot);
}
