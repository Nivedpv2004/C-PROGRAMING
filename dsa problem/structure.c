#include<stdio.h>
int main()
{
//    struct std
//     {
//         int roll_no;
//         char name[10];
//         char dept[10];
//         float fees;
//     }s1,s2;
//     printf("Enter the roll no: ");
//     scanf("%d",&s1.roll_no);
//     printf("Enter the name: ");
//     scanf("%s",s1.name);
//     s1.fees = 1200;
//     s2.fees = 1300;
//     printf("%d\n",s1.roll_no);
//     printf("%c\n",s1.name[1]);
//     s2=s1;
    
//     if(s1.fees<s2.fees)
//     printf("%s",s2.name);
//   return 0;
///////////////////////////////////////////////////////////////////
//  typedef struct 
//  {
//     int real;
//     int img;
//  }com;
//  com c1,c2,sum,sub;
//  int ch;
//  printf("********Menu***********");
//  printf("\n1.Read complex numbers\n2.Display Complex Number\n3.Add two complex number\n4.Subtract two complex number\n5.Exit\n");
//  do{
    
//     printf("\nEnter your choice: ");
//     scanf("%d",&ch);
//     switch(ch)
//     {
//         case 1 :
//                printf("Enter real and imaginary part of 1st complex no.: ");
//                scanf("%d %d",&c1.real,&c1.img);
//                printf("Enter real and imaginary part of 2nd complex no.: ");
//                scanf("%d %d",&c2.real,&c2.img);
//                break;
//         case 2:
//               printf("\n1st complex number is: %d+%di",c1.real,c1.img);
//               printf("\n2nd complex number is: %d+%di",c2.real,c2.img);
//               break;
//         case 3:
//               sum.real=c1.real+c2.real;
//               sum.img=c1.img+c2.img;
//               printf("\nSum of two complex number is: %d+%di",sum.real,sum.img);
//               break;
//         case 4:
//               sub.real=c1.real-c2.real;
//               sub.img=c1.img-c2.img;
//               printf("\nSum of two complex number is: %d+%di",sub.real,sub.img);
//               break;
//         case 5:
//               printf("\nyou close this");
//               break;
//         default:
//           printf("\nEnter valid choice");
              

//     }
//   }
//   while( ch!=5 );

//   //////////////////////////////////////////////////////////
//    typedef struct 
//  {
//     int real;
//     int img;
//  }com;
//  com c[20],sum,sub;
//  sum.real=sum.img=0;

//  int ch,n;
//  printf("********Menu***********");
//  printf("\n1.Read complex numbers\n2.Display Complex Number\n3.Add two complex number\n4.Subtract two complex number\n5.Exit\n");
//  do{
    
//     printf("\nEnter your choice: ");
//     scanf("%d",&ch);
//     switch(ch)
//     {
//         case 1 :
//                printf("\nEnter real and imaginary part of complex no.: ");
//                printf("\nEnter number of complex number: ");
//                scanf("%d",&n);
             
//                for(int i=0;i<n;i++)
//                {
//                printf("\nc[%d]: ",i+1);
//                scanf("%d %d",&c[i].real,&c[i].img);
//                }
//                break;
//         case 2:
//               printf("\nComplex numbers are: ");
//               for(int i=0;i<n;i++)
//               {
//                printf("\nc[%d]: %d+%di",i+1,c[i].real,c[i].img);
//               }
//               break;
//         case 3:
//               for(int i=0;i<n;i++)
//               {
//                sum.real+=c[i].real;
//                sum.img+=c[i].img;
//               }
//               printf("\nSum of two complex number is: %d+%di",sum.real,sum.img);
//               break;
//         case 4:
//               sub.real=c[0].real-c[1].real;
//               sub.img=c[0].img-c[1].img;
//               printf("\nSum of two complex number is: %d+%di",sub.real,sub.img);
//               break;
//         case 5:
//               printf("\nyou close this");
//               break;
//         default:
//           printf("\nEnter valid choice");
              

//     }
//   }
//   while( ch!=5 );

//////////////////////////////////////////////////////////
 
    struct std
    {
        int roll_no;
        char name[10];
        char dept[10];
        float fees;
    }s1,s2,*ptr1;
    ptr1=&s1;
    
    printf("Enter the roll no: ");
    scanf("%d",&ptr1->roll_no);
    printf("Enter the name: ");
    scanf("%s",ptr1->name);
    s1.fees = 1200;
    s2.fees = 1300;
    printf("%d\n",(*ptr1).roll_no);
    printf("%s\n",ptr1->name);
    ptr1++;
    ptr1->roll_no=33;
    if(s1.fees<s2.fees)
    printf("%d",ptr1->roll_no);
 return 0;
}