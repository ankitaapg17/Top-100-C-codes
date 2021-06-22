//To calculate the frequency of elements in Array
//Input the number of elements of an array, input the array elements, create another array to store the freq
//Traverse the input array and update the count of the elements in the frequency array
//Print the frequency array

#include <stdio.h>
int main()
{
	int arr[100],freq[100];
	int size,i,j,count;
	printf("\n Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter elements in array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		
		freq[i]=-1;
	}
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			//If duplicate element is found
			if(arr[i]==arr[j])
			{
				count++;
				//Make sure not to count frequency of same element again
				freq[j]=0;
				
			}
		}
		//If frequency of current element is not counted
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	}
	printf("\n Frequency of all elements of array:\n");
	for(i=0;i<size;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d occurs %d times\n",arr[i],freq[i]);
		}
	}
	
	
}













