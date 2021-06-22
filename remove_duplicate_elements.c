//Remove duplicate element in array
//We will create a temporary array and copy elements from one array to another only if its not duplicate
//Give input in sorted form
#include <stdio.h>
int remove_duplicate(int arr[],int n)
{
	if(n==0||n==1)
	return 0;
	
	int temp[100];
	int j=0,i;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			temp[j++]=arr[i];
		}
	}
		temp[j++]=arr[n-1];
	
	for(i=0;i<j;i++)
	{
		arr[i]=temp[i];
	}
	return j;
}

int main()
{
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[100];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array before:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	n = remove_duplicate(arr,n);
	
	printf("\nArray after removing:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}








