#include <stdio.h>
#include <string.h>
struct employee
{
    char a;
} x[3];
int main()
{
    int i;
    printf("Enter 3 characters \n");
    for (i = 0; i <3; i++)
    {
        scanf("%c", &x[i].a);
       fflush(stdin);
    }
    printf("3 chars are \n");
    for (i = 0; i < 3; i++)
    {
        printf("%c", x[i].a);
    }

    return 0;
}