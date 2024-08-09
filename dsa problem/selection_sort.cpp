#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a[]={55,12,13,67,232,1,89};
    int n = sizeof(a)/sizeof(a[0]);
    int min,pos,flag;
    for(int i= 0;i<n;i++)
    {
     min=a[i];
     flag=0;
     for(int j=i+1;j<n;j++)
     {
        if(a[j]<min)
        {
          min=a[j];
          pos=j;
          flag=1;
        }    
     }
     if(flag == 1)
     {
     swap(&a[i],&a[pos]);
     }
     cout<<endl<<i+1<<"pass"<<":";
     for(int k=0;k<n;k++)
     {
        cout<<a[k]<<" ";
     }
    }
    cout<<"\n";
}