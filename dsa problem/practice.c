// #include<stdio.h>
// #include<string.h>
// // int traverse(int *,int);
// // int insert(int *,int);
// // int delete(int *,int);
// // int merge(int *,int);
// // int sort(int *,int);
// // int main()
// // {
// //   int n,a[20];
// //   printf("\nEnter the number: ");
// //   scanf("%d",&n);
// //   for(int i=0;i<n;i++)
// //   {
// //     printf("\na[%d]:",i+1);
// //     scanf("%d",&a[i]);
// //   }
// //   traverse(a,n);
// //   insert(a,n);
// //   traverse(a,n+1);
// //   delete(a,n+1);
// //   traverse(a,n-1);
// //   merge(a,n);
// // }
// // int traverse(int a[],int n)  
// // {
// //   printf("\nArray element are: ");
// //   for(int i=0;i<n;i++)
// //   {
// //     printf("%d ",a[i]);
// //   }
// // }
// // int insert(int a[],int n)
// // {
// //   int p,ele;
// //   printf("\nEnter the position to insert: ");
// //   scanf("%d",&p);
// //   for(int i=(n-1);i >= p;i--)
// //   {
// //     a[i+1]=a[i];
// //   }
// //   printf("\nEnter the number: ");
// //   scanf("%d",&ele);
// //   a[p]=ele;
// // }                             
// // int delete(int a[],int n)
// // {
// //   int p,ele;
// //   printf("\nEnter the position to delete: ");
// //   scanf("%d",&p);
// //   for(int i=p;i<n-1;i++)
// //   {
// //     a[i]=a[i+1];
// //   }
 
// // } 
// // int search(int *,int);                               
// // int merge(int a[],int n)
// // {
// //   int b[]={22,23,24,25,28};
// //   int len=sizeof(b)/sizeof(b[0]);
// //   printf("%d",len);
// //   for(int i=n,j=0;i<n+len;i++,j++)
// //   {
// //     a[i]=b[j];
// //   }
// //   printf("\nArray after merge element are: ");
// //   for(int i=0;i<n+len;i++)
// //   {
// //     printf("%d ",a[i]);
// //   }
// //   printf("\n");
// //   search(a,n+len);
// // }
// // int search(int a[],int length)
// // {
// //   int val;
// //   printf("\nEnter the value to search: ");
// //   scanf("%d",&val);
// //   for(int i=0;i<length;i++)
// //   {
// //     if(a[i]==val)
// //     {
// //       printf("\nsuccessfully search at: %d",i);
// //       break;
// //     }
// //   }
// //    printf("\n");
// //    sort(a,length);
// // }
// // int sort(int a[],int l)
// // {
// //   printf("\nBefore sorting element are: ");
// //   for(int i=0;i<l;i++)
// //   {
// //     printf("%d ",a[i]);
// //   }
// //   int temp;
// //   for(int i=0;i<l;i++)
// //   {
// //     for(int j=1;j<l;j++)     
// //     {
// //       if(a[i] > a[j])
// //       {
// //         temp=a[i];
// //         a[i]=a[j];
// //         a[j]=temp;
// //       }
// //     }
// //   }
// //   printf("\nAfter sorting element are: ");
// //   for(int i=0;i<l;i++)
// //   {
// //     printf("%d ",a[i]);
// //   }
// void fun(int *num)
// {
//   // num--;
//   printf("%p\n",num);
//   num++;
//   printf("%p\n",num);

// }
// void main()
// {
//   int a[]={1,2,3,4,5};
//   fun(a+2);
// }



#include<stdio.h>
void display(int (*p)[2])
{
  for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
  
      printf("%d ",*(*(p+i)+j));
    }
    printf("\n");
   }
}
void transpose(int a[][2])
{
  for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
  
      printf("%d ",a[j][i]);
    }
    printf("\n");
   }
}
void add(int a[][2],int b[][2])
{
  int sum[2][2];
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      sum[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("\nAfter sum: \n");
  display(sum);
}
void main()
{
  int a[2][2];
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
      printf("a[%d][%d]: ",i,j);
      scanf("%d",&a[i][j]);
    }
   }
   int b[2][2];
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
      printf("b[%d][%d]: ",i,j);
      scanf("%d",&b[i][j]);
    }
   }
   printf("\nmatrix A\n");
   display(a);
   printf("\nmatrix B\n");
   display(b); 
   add(a,b);
   printf("\nAfter transpose\n");
   transpose(a);
}