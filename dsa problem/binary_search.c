#include<stdio.h>

void main()
{
    int a[]={0,1,2,3,4,5,6,7,8,9,10};
    int end=sizeof(a)/sizeof(a[1])-1;
    
    int mid=0,beg=0,pos=-1,count=0;
    int val=0;
    while(beg <= end)
    {
        count++;
        mid=(beg+end)/2;
        if(val == a[mid])
        {
            pos=mid;
            break;
        }
        else if(val < a[mid])
        {
            end=mid-1;
        }
        else 
           beg=mid+1;
    }
    if(pos != -1)
     printf("%d present at %d index of array in %d iteration",val,pos,count);
    else
     printf("%d is not present in array in %d iteration",val,count);
}