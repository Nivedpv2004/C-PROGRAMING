#include <stdio.h>
int main() 
   {
	int x, y, result;
    printf("\nInput the first integer: "); 
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);
    result = x * y;
	printf("Product of the above two integers = %d\n", result);
}