//Program for finding which element occurs maximum number of times in an array

#include <stdio.h>

//This function prints the maximum occurring element of array
void getMaxCountElement(int array[], int size)
{
	int i,j,maxCount,maxElement,count;
	maxCount=0;
	//Count the frequency of every element of array, and check if it is greater than max count element
	//we found till now and update it accordingly
	
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(array[j]==array[i])
			{
				count++;
				//If count of current element is more than maxCount, update it and maxElement
				if(count>maxCount)
				{
					maxCount=count;
					maxElement=array[j];
				}
			}
		}
		
		
	}
	printf("Maximum Repeating Element is: %d\n Count: %d",maxElement,maxCount);
}

int main()
{
	int array[10]={2,4,5,8,9,5,5};
	getMaxCountElement(array,7);
	
}

