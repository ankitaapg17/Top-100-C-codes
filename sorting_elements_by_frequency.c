//Sorting elements of an array by frequency
//Sort the array
//Create a 2D array of element and frequency
//Sort 2D array in descending order
//Print it

#include <stdio.h>
int main()
{
	int i,j,m,freq,arr[100];
	printf("Enter the size of array:");
	scanf("%d",&m);
	printf("Enter the array elements:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i]==arr[j])
			{
				freq++;
			}
		}
	}
	frequencySort();
	
	
	
}








