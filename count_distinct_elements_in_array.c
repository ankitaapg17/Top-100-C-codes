//Count distinct elements in Array
//To print the number of distinct element and distinct elements also

#include <stdio.h>
int main()
{
	int n,i,j,count=0,unique=0;
	printf("Enter size:");
	scanf("%d",&n);
	int arr[100],newarr[100];
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<=i;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			newarr[unique]=arr[i];
			unique++;
		}
	}
	printf("Total distinct number of elements: %d\n",unique);
	for(i=0;i<unique;i++)
	{
		printf("%d",newarr[i]);
	}
}







