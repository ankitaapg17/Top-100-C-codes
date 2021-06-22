//Introduction to 2D Arrays

//Find pairs in array with given sum


#include <stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	int array[100];
	int check;
	int sum,count=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	scanf("%d",&check);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=array[i] + array[j];
			if(sum==check)
			{
				printf("[%d %d]\n",array[i],array[j]);
				count++;
			}
		}
	}
	printf("Total number of pairs :%d",count);
	
	
}





