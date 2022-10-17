#include<stdio.h>

int main()
{
    printf("1.addtion\n2.subtraction\n3.multiplication\n4.division\n5.modulus\n,6.exit\n");
    int a,b,c;
    printf("enter the value of a and b:\t");
    scanf("%d%d",&a,&b);
    printf("enter the choice");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("addtion of a and b is %d",a+b);
        break;
        case 2:
        printf("subtraction of a and b is %d",a-b);
        break;
        case 3:
        printf("multiplication of a and b is %d",a*b);
        break;
        case 4:
        printf("division of a and b is %d",a/b);
        break;
        case 5:
        printf("modulus of a and b is %d",a%b);
        break;
        case 6:
        printf("exit");
        break;
        default:
        printf("invalid choice");
    }
    return 0;
}