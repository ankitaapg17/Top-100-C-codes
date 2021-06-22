// Sort first half in ascending order and second half in descending order

#include <stdio.h>

int main()
{
	int i,j,m,temp;
	int arr1[100];
	printf("Enter the size of the array:");
	scanf("%d",&m);
	printf("Enter the array elements:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("THE INPUT ARRAY IS:");
	for(i=0;i<m;i++)
	{
		printf("%d",arr1[i]);
	}
	
	for(i=0;i<m/2;i++)
	{
		for(j=0;j<m/2;j++)
		{
		
		//Sort first half in ascending order
		if(arr1[i]<arr1[j])
		{
			temp=arr1[i];
			arr1[i]=arr1[j];
			arr1[j]=temp;
		}
	}
	}
	
	for(i=m/2;i<m;i++)
	{
		for(j=m/2;j<m;j++)
		{
		
		//Sort second half in descending order
		if(arr1[i]>arr1[j])
		{
			temp=arr1[i];
			arr1[i]=arr1[j];
			arr1[j]=temp;
		}
	}
	}
	printf("THE ARRAY NOW IS:");
	for(i=0;i<m;i++)
	{
		printf("%d",arr1[i]);
	}
	
}



