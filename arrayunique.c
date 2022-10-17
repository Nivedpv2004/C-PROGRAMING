#include <stdio.h>
    int count=0;
#define MAX_SIZE 100  // Maximum array size
    int a[MAX_SIZE];
void duplicate(int arr[],int size)
{
    int i,j;
     for(i=0; i<size; i++)               // 10 20 10 20 21
    {
        for(j=i+1; j<size; j++)
        {
            /* If duplicate found then increment count by */
            if(arr[i] == arr[j]&&arr[i]!=0)
            {
                a[count]=arr[i];
                count++;
                arr[i]=0;
                arr[j]=0;
                break;
            }
            
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d \n", count);
    printf("duplicate elements are: ");
    for(int i=0;i<count;i++)
    {
       printf("%d, ",a[i]);
    }
    printf("\n");
    return;
}
void unique(int arr[],int size)
{
    printf("Total no of unique elements are %d\n",(size-(2*count)));
    printf("The unique elements are: ");
    for(int i=0;i<size;i++)    //10 21 10 20 20     20 10     
    {
        if(arr[i]!=0)
        {
            printf("%d, ",arr[i]);
        }
    }
}

int main()
{
    int arr[MAX_SIZE];
    int i, j, size;

    /* Input size of array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    duplicate(arr,size);
    unique(arr,size);

    return 0;
}