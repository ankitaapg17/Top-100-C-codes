//Program to check if the given arrays are disjoint or not
//Two arrays are said to be disjoint if they have no elements in common.
//Use two loops. Traverse the array1 using the outer loop. 
//Use the inner loop to check if the elements in array2 are found in array1
//If atleast one element of array2 is found in array1, return False.
#include <stdio.h>
#include <stdlib.h>

int disjoint_arrays(int arr1[],int arr2[], int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr1[i]==arr2[j])
			{
				return -1;
			}
		}
	}
	return 1;
}

int main()
{
	int m,n;
	printf("\n Enter the size of array 1: ");
	scanf("%d",&n);
	printf("\n Enter the size of array 2: ");
	scanf("%d",&m);
	int arr1[100],arr2[100],i;
	printf("\nInput Array 1 elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nInput Array 2 elements: ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr2[i]);
	}
	int res = disjoint_arrays(arr1,arr2,n,m);
	if(res == -1)
	printf("\n The arrays are not disjoint");
	else
	printf("\n The arrays are disjoint");
	
	
	
}







