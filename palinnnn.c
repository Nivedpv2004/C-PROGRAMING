#include <stdio.h>
#include <string.h>
int main()
{
    char s1[55],s2[55],s3[55];
    int x,i;
    printf("Enter the string\n");
    scanf("%s",s1);
    strcpy(s3,s1);
    strcpy(s2,strrev(s1));
    x=strcmp(s3,s2);
    if(x==0)
    {
        printf("The string is palindromic \n");
    }
    else
    {
                printf("The string is not palindromic \n");
    }
    return 0;
}
