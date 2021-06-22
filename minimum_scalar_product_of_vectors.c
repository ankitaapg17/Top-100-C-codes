//To find the minimum scalar product of two vectors
//Input the number of elements of the arrays
//Input the array 1 and array 2 elements
//Initialize sum=0
//Sort the array 1 in ascending order, sort the array2 in descending order
//repeat from i=1 to n
//sum=sum + (arr1[i]*arr2[i])
//return sum

#include <stdio.h>

int sort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int sort_des(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(arr[i]<arr[j])
			{
				int a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
}

int main()
{
	int n;
	printf("Enter the size of vector:");
	scanf("%d",&n);
	int arr1[100],arr2[100];
	int i;
	scanf("Enter the first array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the second array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	sort(arr1,n);
	sort_des(arr2,n);
	int sum =0;
	for(i=0;i<n;i++)
	{
		sum=sum+(arr1[i]*arr2[i]);
	}
	printf("%d",sum);
}
















