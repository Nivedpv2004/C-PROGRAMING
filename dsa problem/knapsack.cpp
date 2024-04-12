#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(float *a1,float *a2)
{
    int temp=*a1;
    *a1 = *a2;
    *a2 = temp;
    return ;
}

int main()
{
  float n,m,p[10],w[10],pw[10],prof;
  cout<<"Enter number of elements: ";
  cin>>n;
  cout<<"Enter the size of bag: ";
  cin>>m;
  for(int i=1;i<=n;i++)
  {
   
    cout<<"p["<<i<<"]: ";
    cin>>p[i];
    cout<<"w["<<i<<"]: ";
    cin>>w[i];
  }
  for(int i=1;i<=n;i++)
  {
    pw[i]=p[i]/w[i];
  }
  for(int i=1;i<=n;i++)
  {
    cout<<" "<<pw[i];
  }
   int flag;
    for(int i=1;i<=n;i++)
    {
            flag = 0;
            for(int j=1;j<=n-i;j++)
              {
                if(pw[j]<pw[j+1])
                {
                    flag=1;
                    swap(&pw[j],&pw[j+1]);
                    swap(&p[j],&p[j+1]);
                    swap(&w[j],&w[j+1]);
                }
              }
              cout<<endl<<i<<" pass: ";
               for(int k=1;k <= n ;k++)
                  cout<<fixed<<setprecision(2)<<pw[k]<<" ";
              if(flag == 0)
                break;
    }
    int i;
    for(i=1;i<=n;i++)
    {
     if(m>0 && m >= w[i])
     {
       m=m-w[i];
       prof=prof+p[i];
     }
     else
      break;
    }
    if(m>0)
      prof= prof + ((p[i]*m)/w[i]);
    cout<<endl<<"Maximum profit is: "<<prof<<endl;
}