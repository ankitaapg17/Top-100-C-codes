//Print all unique elements of an array
//Find non-repeating elements in array
#include <stdio.h>
int main()
{
	int arr1[100],n,ctr=0;
	int i,j,k;
	printf("\n\n Input the size:");
	scanf("%d",&n);
	printf("Input %d elements in the array:\n",n);
	for(i=0;i<n;i++)
	{
		printf("element-%d:",i);
		scanf("%d",&arr1[i]);
	}
	printf("\n The unique elements found in the array are:");
	for(i=0;i<n;i++)
	{
		ctr=0;
		for(j=0;j<n+1;j++)
		{
			//Increment the counter when the search value is duplicate
			if(i!=j)
			{
				if(arr1[i]==arr1[j])
				{
					ctr++;
				}
			}
		}
		if(ctr==0)
		{
			printf("%d",arr1[i]);
		}
		printf("\n\n");
	}
}







