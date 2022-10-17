#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
int *ptr;
int i;
ptr=(int*)malloc(1*sizeof(int));
printf("Enter the value of integers \n");
for(i=0;i<5;i++)
{
    scanf("%d",&ptr[0]);
    fflush(stdin);
    printf("The value at %d is %d \n",i,ptr[0]);
    free(ptr);
}
return 0;
}