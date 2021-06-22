//Find all symmetric pairs in an array
//Input the array from the user
//Use two loops, one loop for traversing the array and the other loop to check if symmetric pair is found
//If found, print the pairs

#include <stdio.h>

void symmetric_array_pair(int arr1[],int arr2[],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr1[i]==arr2[j] && arr1[j]==arr2[i])
			{
				printf("The symmetric pairs are:\n");
				printf("(%d,%d)\t",arr1[i],arr1[j]);
				continue;
			}
		}
	}
	
	
}


int main()
{
	int m,n;
	int i,j;
	int arr1[100],arr2[100];
	
	printf("Enter the size of array:");
	scanf("%d",&m);
	scanf("%d",&n);
	printf("Enter the pairs:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr2[i]);
	}
	symmetric_array_pair(arr1,arr2,m,n);
}










