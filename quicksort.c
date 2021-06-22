//Quick sort,,,,check

//Quick sort is a divide and conquer algorithm
//1)Pick an element from the array, this element is called as pivotal element.
//2)Divide the unsorted array of elements in two arrays with values less than the pivot come in the 2nd subarray
//while all elements with values greater than the pivot come in the second sub-array. This step is called 
//the partition operation
//3)Recursively repeat the step 2 to sub-array with smaller value and seperately to the 
//sub-array of elements with larger values(until the sub-arrays are sorted).

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void quicksort(int number[25],int first, int last)
{
	int i,j,pivot,temp;
	
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
	}
	
	while(i<j)
	{
		while(number[i]<=number[pivot] && i<last)
		i++;
		while(number[j]>number[pivot])
		j--;
		
		if(i<j)
		{
			temp=number[i];
			number[i]=number[j];
			number[j]=temp;
		}
	}
	temp=number[pivot];
	number[pivot]=number[j];
	number[j]=temp;
	quicksort(number,first,j-1);
	quicksort(number,j+1,last);
	
}



int main()
{
	int i,count,number[25];
	
	printf("How many elements are there:");
	scanf("%d",&count);
	
	printf("Enter %d elements:",count);
	for(i=0;i<count;i++)
	{
		scanf("%d",&number[i]);
	}
	quicksort(number,0,count-1);
	
	printf("Order of sorted elements:");
	for(i=0;i<count;i++)
	{
		printf("%d",number[i]);
	}
}
 








