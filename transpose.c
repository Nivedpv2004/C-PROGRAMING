/*c program to find transpose of matrix*/
#include <stdio.h>
int main()
{
    int r,c,a[50][50],tran[50][50];         //declaration of matrix a, tran for transpose,r,c
    printf("enter number of rows\n");       //number of rows
    scanf("%d",&r);
    printf("enter number of columns\n");    //number of columns
    scanf("%d",&c);
    printf("matrix a elements\n");          //reading matrix a elements
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("matrix a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    // transpose of matrix
    printf("transpose of matrix a\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            tran[j][i]=a[i][j];      //logic to transpose
        }
    }
    for(int i=0;i<c;i++)        // displaying transpose of matrix
    {
        for(int j=0;j<r;j++)
        {
              printf("%d ", tran[i][j]);
        }
        printf("\n");
    }
 return 0;
}


    
