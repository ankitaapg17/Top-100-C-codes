//Reverse an array without using another array
#include <iostream>
using namespace std;



int reverseArray(int arr[],int n)
{
	int start=0;
	int end=n-1;
	
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
		
	}
	
	
	
	
}

int printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}


int main()
{
	int arr1[]={1,2,3,4,5};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	
	printArray(arr1,n);
	cout<<endl;
	
	reverseArray(arr1,n);
	
	printArray(arr1,n);
	
	
	
	
}










