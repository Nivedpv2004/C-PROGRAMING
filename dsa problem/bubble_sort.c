#include<stdio.h>
void swap(int *a1,int *a2)
{
    int temp=*a1;
    *a1 = *a2;
    *a2 = temp;
}

void main()
{
    int a[]={1,8,3,4,5};
    int n=sizeof(a)/sizeof(a[1])-1;
    int flag;
    for(int i=0;i<=n;i++)
    {
            flag = 0;
            for(int j=0;j<n-i;j++)
              {
                if(a[j]>a[j+1])
                {
                    flag=1;
                    swap(&a[j],&a[j+1]);
                }
              }
              printf("\n %d pass :",i+1);
               for(int k=0;k <= n ;k++)
                  printf("%d ",a[k]);
              if(flag == 0)
                break;
    }
    printf("\n\n");
      
}    