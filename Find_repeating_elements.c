//Find repeating element in array
//An easier approach to find all repeating elements in an array is to use two loops.
//Use the first loop for traversing the array and the second loop to check if the current element is already
//encountered
#include <stdio.h>
void repeating_element(int arr[],int n)
{
	int i,j;
	int count=0;
	printf("Repeating elements are:");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%d",arr[j]);
			}
		}
	}
}


int main()
{
	int i,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	repeating_element(arr,n);
}










