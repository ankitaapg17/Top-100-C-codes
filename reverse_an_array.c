//Reverse of an array
#include <stdio.h>
#include <conio.h>

int func(int arr[10],int arr1[10],int n)
{
	int i,j;
	for(i=n-1,j=0;i>=0;i--,j++)
	{
		arr1[j]=arr[i];
	}
	for(i=0;i<n;i++)
	{
		arr[i]=arr1[i];
	}
	printf("Reversed array:");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
}

main()
{
	int arr[10],arr1[10],i,n,k;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
	}
	k=func(arr,arr1,n);
	
	
	
	
	
	
}


