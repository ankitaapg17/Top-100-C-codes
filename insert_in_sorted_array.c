//To insert an element in a sorted array
#include <stdio.h>
void main()
{
	int a[100],n,i,e;
	printf("Enter the size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number:");
		scanf("%d",&a[i]);
	}
	printf("Enter the element:");
	scanf("%d",&e);
	i=n-1;
	while(e<a[i] && i>=0)
	{
		a[i+1]=a[i];
		i--;
	}
	a[i+1]=e;
	printf("\n the array:\n");
	for(i=0;i<n+1;i++)
	{
		printf("\n %d",a[i]);
	}
	
	
}
