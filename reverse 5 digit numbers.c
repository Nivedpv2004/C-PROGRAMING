//program to reverse 5 digit number
#include <stdio.h>
int main()
{
    int n, reverse = 0, r;
    printf("Enter 5-digit integer: ");
    scanf("%d", &n);
    while (n != 0) {
        r = n % 10;
        reverse = reverse * 10 + r;
        n = n/10;
    }
    printf("Reverse of 5-digit number = %d", reverse);
    return 0;
}
