#include <stdio.h>
 
int main() {
    int a, b, result;
     
    printf("Enter first  number : ");
    scanf("%d", &a);
     
    printf("Enter second number : ");
    scanf("%d", &b);
     
    //add two numbers
    result = a + b;
    printf("Sum : %d\n", result);
     
    return 0;
}