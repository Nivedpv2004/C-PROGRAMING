#include<stdio.h>
void main()
{
	int i,j,temp,n;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	int ar[n];
	printf("\nEnter %d elements \n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	printf("\n\nThe sorted array is : \n");
	for(i=0;i<n;i++)
		printf("Element %d : %d\n",i+1,ar[i]);
}
