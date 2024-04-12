#include<iostream>
using namespace std;
int main()
{
    int a[]={5,4,3,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    int temp,j; 
     for(int i=1;i<n;i++)
     {
        temp=a[i];
        j=i-1;
        while(temp < a[j] && j >= 0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=temp;
        cout<<endl<<"pass "<<i<<":";
        for(int k=0 ; k<n; k++)
        {
            cout<<a[k]<<" ";
        }
     }
     cout<<"\n";
     return 0;
}