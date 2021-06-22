//Count the number of even and odd numbers present in an array
#include <stdio.h>

#define MAX_SIZE 100
int main()
{
	int arr[MAX_SIZE];
	int i,size,even,odd;
	
	//Input size of the array
	printf("Enter size of the array:");
	scanf("%d",&size);
	
	//Input array elements
	printf("Enter %d elements in array: ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	//Assuming that there are 0 even and 0 odd elements
	even=0;
	odd=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("Total even elements: %d\n", even);
	printf("Total odd elements: %d\n", odd);
	
	
	
	
	
	
}








