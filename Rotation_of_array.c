//Rotation of elements of array- left and right
#include <stdio.h>

int main()
{
	//Initialize array
	int arr[]={1,2,3,4,5};
	//Calculate the length of array arr
	int length=sizeof(arr)/sizeof(arr[0]);
	//Determine the number of times an array should be rotated
	int i,n=4;
	
	//Displays original array
	printf("Original array:\n");
	for(i=0;i<length;i++)
	{
		printf("%d",arr[i]);
	}
	
	//Rotate the given array by n times toward right
	for(i=0;i<n;i++)
	{
		int j,last;
		//Stores the last element of array by one
		last =arr[length-1];
		
		for(j=length-1;j>0;j--)
		{
			//Shift element of array by one
			arr[j]=arr[j-1];
		}
		//Last element of array will be added to the starting
		arr[0]=last;
		
	}
	printf("\n");
	
	//Displaying resulting array after rotation
	printf("Array after right rotation:\n");
	for(i=0;i<length;i++)
	{
		printf("%d",arr[i]);
	}
	
	
	
	
	
	
	
	
	
	
}





