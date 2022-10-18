// Binary Search Program in C
#include <stdio.h>


int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x;
	printf("Enter Element to be found: ");
	scanf("%d",&x);
	
    int l = 0;
    int r = n-1;
    int c = 0;
    while (l <= r) 
    {
        
		int m = l + (r - l) / 2;

	
		if (arr[m] == x)
		{
			printf("Element found at index  %d", m );
			c++;
		}

		
		if (arr[m] < x)
		{
			l = m + 1;
		}

		
		else{
			r = m - 1;
		}
	}

	if(c == 0)
	{
	    printf("Element not found");
	}
	return 0;
}
