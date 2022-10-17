include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    c=1;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            c*=i;
        }   
    }
    if(c==a)
    {
        printf("The number is a perfect number");
    }
    else
    {
        printf("The number is not a perfect number");
    }
    return 0;   
}