#include <stdio.h>
int main()
{
    int n, x, y, c, q;
    printf("Enter the number of rows: \n");
    scanf("%d",&n);
    for (y = 0; y < n; y++)
    {
        c = 1;
        for(q = 0; q < n - y; q++)
        {
            printf("%3s", " ");
        }
        for (x = 0; x <= y; x++)
        {
            printf("   %3d ",c);
            c = c * (y - x) / (x + 1);
        }
       printf("\n");
    }
    printf("\n");
    return 0;
}
