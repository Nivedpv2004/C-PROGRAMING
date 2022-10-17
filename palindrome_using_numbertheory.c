#include <stdio.h>
#include <string.h>
int main()
{
    char s1[55],s2[55];
    int x,i,k=0;
    printf("Enter the string\n");
    scanf("%s",s1);
    x=strlen(s1);
    for(i=0;i<(x/2);i++)
    {
        if((int)s1[i]!=(int)s1[x-i-1])
        {
            k=1;
            break;
        }
        else
            continue;

    }
    if(k==1)
    {
        printf("The number is not palindromic \n");
    }
    else
            printf("The number is palindromic \n");
return 0;
}
    
