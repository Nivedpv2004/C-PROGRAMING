#include <stdio.h>
int main()
{
    int x,i,t;
    printf("Enter length of array\n");                       
    scanf("%d",&x);                                                
        int arr[x];
    printf("Enter elements of array\n");                       
    for(i=0;i<x;i++) 
    {
        printf("Enter %d th element :",i);                       
        scanf("%d",&arr[i]);
    }
    printf("array elements are \n");                       
    for(i=0;i<x;i++)
    {
        printf("%d",arr[i]);                       
    }
    for(i=0;i<(x/2);i++)
    {
        t=arr[i];
        arr[i]=arr[x-i-1];
        arr[x-i-1]=t;
    }
    printf("array elements in reverse fashion \n");
    for(i=0;i<x;i++)
    {
        printf("%d",arr[i]);                       
    }
    return 0;
}
////////////////////////////////////////////////////