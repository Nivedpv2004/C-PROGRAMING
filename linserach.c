#include <stdio.h>
void main()
{
	int i,n,item;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int ar[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element no %d : ",i+1);
		scanf("%d",&ar[i]);
	}
	printf("Enter the item you are searching for: ");
	scanf("%d", &item);
	for (i=0;i<n;i++)
	{
		if(ar[i]==item)
		{
	  		printf("%d found at position %d",item,i+1);
			break;
	  	}
	}
	if(i==n)
		printf("Item %d not found!!",item);
}
