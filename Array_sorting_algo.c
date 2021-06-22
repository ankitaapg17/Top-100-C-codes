//Sorting

//Merge sort,,,,check

//Radix sort
//Heap sort

//Merge sort is based on the principle of Divide and Conquer Algorithm
//Using divide and conquer technique, we divide the problems into subproblems. When the solution is ready 
//we 'combine' the results from the subproblems to solve the main problem
//When the conquer step reaches the base step and we get two sorted sub-arrays, we combine the results

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void merge(int arr[], int l, int m, int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	
	//Create temp arrays
	int L[50],R[50];
	
	//Copy data to temp arrays
	for(i=0;i<n1;i++)
	L[i]=arr[l+i];
	for(j=0;j<n2;j++)
	R[j]=arr[m+l+j];
	
	//Merge temp arrays back into arr[l...r]
	
	i=0;//Initial index of first subarray
	j=0;//Initial index of second subarray
	k=l;//Initial index of merged subarray
	
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	//Copy the remaining elements of L[] if any
	while(i<n1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	//Copy the remaining elements of R[] if any
	while(j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
	
	
}


void mergeSort(int arr[], int l, int r)
{
	if(l<r)
	{
		
	int m=l+(r-1)/2;
	
	//Sort first and second halves
	mergeSort(arr,l,m);
	mergeSort(arr,m+1,r);
	
	
	merge(arr,l,m,r);
    }
}

void Printarray(int A[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",A[i]);
	}
	printf("\n");
}

int main()
{
	int arr[]={12,11,8,4,3};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	
	printf("Given array is:\n");
	Printarray(arr,arr_size);
	
	mergeSort(arr, 0 ,arr_size-1);
	
	printf("\nSorted array:");
	Printarray(arr,arr_size);
	return 0;
}



