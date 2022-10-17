#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int palindrome(int number)
{
    int reverse=0;
    int original= number;
    while( number !=0){
        reverse=reverse*10 + number%10;
        number=number/10;
    }
    printf("The reversed number of the original number is %d\n",reverse);
    if(original == reverse)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{   
    printf("We have to check whether a entered number is a palindrome number or not\n");
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(palindrome(n))
    {
        printf("The entered number is a palindrome number\n");
    }
    else
    {
        printf("The entered number is not a palindrome number\n");
    }

return 0;
}
    