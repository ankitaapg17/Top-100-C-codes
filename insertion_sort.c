//Insertion sort
//The array is virtually split into a sorted and an unsorted part. Values from the unsorted parts are picked
//and placed at the correct position in the sorted part.
//To sort an array of size n in ascending order:
//1) Iterate from a[1] to a[n] over the array.
//2) Compare the current element(key) to its predecessor
//3) If the key element is smaller than the predecessor, compare it to the elements before. Move the greater
// elements one position up to make space for the swapped element.
#include <stdio.h>
#include <conio.h>
void insertsort(int a[],int n);
int main()
{
	int a[100],n,i;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array before sorting:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	insertsort(a,n);
	printf("\n The array after the sort:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}

void insertsort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0 && temp<a[j];j--)
		{
			a[j+1]=a[j];
			
		}
		a[j+1]=temp;
	}
}


