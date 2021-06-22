//sort the elements of array in ascending order
//We need two loops.The outer loop will select an element, and inner loop allows us to compare selected element 
//with the rest of the elements

#include <stdio.h>

int main()
{
	//Initialise array
	int arr[]={5,2,8,7,1};
	int temp=0,i,j;
	
	//Calculate length of array arr
	int length = sizeof(arr)/sizeof(arr[0]);
	
	//Displaying elements of original array
	printf("Elements of original array:\n");
	for(i=0;i<length;i++)
	{
		printf("%d",arr[i]);
	}
	
	//Sort the array in ascending order
	for(i=0;i<length;i++)
	{
		for(j=i+1;j<length;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n");
	
	//Displaying elements of array after sorting
	printf("Elements of array sorted in ascending order:\n");
	for(i=0;i<length;i++)
	{
		printf("%d",arr[i]);
	}
	
	
	
	
}






