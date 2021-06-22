//Determine array is a subset of another array or not

#include <stdio.h>

void check(int arr[], int sub_arr[], int m, int n)
{
	int i,j,flag=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sub_arr[i]==arr[i])
			{
				flag=1;
				
			}
		}
	}
	if(flag==1)
	printf("The array is subset");
	else
	printf("Not a subset");
	
	
}

int main()
{
	int i,j,m,n;
	int arr[100],sub_arr[100];
	printf("Enter the size of array:");
	scanf("%d",&m);
	printf("Enter the array elements:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the sub-array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&sub_arr[i]);
	}
	check(arr,sub_arr,m,n);
	
}


