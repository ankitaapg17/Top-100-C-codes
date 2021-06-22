//Delete all duplicate elements present in an array
#include<stdio.h>
int remove_duplicate_elements(int arr[],int n)
{
	
	int temp[n];
	int j=0;
	int i;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			temp[j++]=arr[i];
			
		}
		temp[j++]=arr[n-1];
	}
	for(i=0;i<j;i++)
	{
		arr[i]=temp[i];
	}
	return j;
}



int main()
{
	int a[100],size,n,i,j,k;
	printf("Enter size of the array:");
	scanf("%d",&size);
	printf("Enter elements of the array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	n=remove_duplicate_elements(a,size);
	
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
}
//check





