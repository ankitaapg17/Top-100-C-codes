//Merge two arrays of same size sorted in descending order
#include <stdio.h>
void main()
{
	int arr1[100],arr2[100],arr3[100];
	int s1,s2,s3;
	int i,j,k;
	
	printf("\n\n Input the number of elements to be stored in first array:");
	scanf("%d",&s1);
	
	printf("Enter the elements in the array:");
	for(i=0;i<s1;i++)
	{
		printf("element-%d:",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n\n Input the number of elements stored in second array:");
	scanf("%d",&s2);
	for(i=0;i<s2;i++)
	{
		printf("element-%d: ",i);
		scanf("%d",&arr2[i]);
	}
	s3=s1+s2;
	
	//Insert in third array
	for(i=0;i<s1;i++)
	{
		arr3[i]=arr1[i];
		
	}
	for(j=0;j<s2;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}
	//Sort the array in descending order
	for(i=0;i<s3;i++)
	{
		for(k=0;k<s3-1;k++)
		{
			if(arr3[k]<=arr3[k+1])
			{
				j=arr3[k+1];
				arr3[k+1]=arr3[k];
				arr3[k]=j;
			}
		}
	}
	//Print the merged array
	for(i=0;i<s3;i++)
	{
		printf("%d ",arr3[i]);
	}
	printf("\n");
	
	
	
}







