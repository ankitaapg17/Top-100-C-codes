//sorting elements of an array according to the order defined by another array
#include <stdio.h>
void sort_according(int arr1[], int arr2[], int m, int n)
{
	int temp[100],visited[100];
	for(i=0;i<m;i++)
	{
		temp[i]=arr1[i];
		visited[i]=0;
	}
	//Sort elements
	
	sort(temp,temp+m);
	
	int ind=0;
	
	for(i=0;i<n;i++)
	{
		
	}
	
}

void print_array(int arr[],int n)
{
	
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		
	}
}


int main()
{
	int m,n,i;
	printf("\nEnter the size of array 1: ");
	scanf("%d",&m);
	printf("\nEnter the size of array 2: ");
	scanf("%d",&n);
	int arr1[100],arr2[100];
	printf("\nInput the array 1 elements :");
	for(i=0;i<m;i++)
	{
		
		scanf("%d",&arr1[i]);
	}
	printf("\nInput the array 2 elements :")
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("The sorted array:");
	sort_according(arr1,arr2,m,n);
	print_array(arr1,m);
	
	
	
	
}



