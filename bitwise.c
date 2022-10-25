#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k)
{
    int i,j,add=0,orr=0,xorr=0;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if((i&j)<k&&add<(i&j))
            {
                add=i&j;
            }
        }
    }
        for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if((i|j)<k&&orr<(i|j))
            {
                orr=i|j;
            }
        }
    }
        for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if((i^j)<k&&xorr<(i^j))
            {
                xorr=i^j;
            }
        }
    }
    printf("%d\n",add);
    printf("%d\n",orr);
    printf("%d\n",xorr);
        
}

int main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
