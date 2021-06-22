//Subarrays: Continuous part of the array
//Number of subarrays of an array with n elements=nC2 + n=n*(n+1)/2
//+n because single element is also a subarray


//Subsequence: A subsequence is a sequence that can be derived from an array by selecting zero 
//or more elements, without changing the order of the remaining elements.
//It is not continuous but maintains the order.
//Number of subsequences of an array with n elements=2^n


//Given an array a[] of size n. Output sum of each subarray of the given array.
//[1 2 2]
//[1 12  122 2 22 2]
//Output:-[1  3   5  2  4 2]



#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int curr = 0;
	
	for(int i=0;i<n;i++)
	{
		curr=0;
		for(int j=i;j<n;j++)
		{
			curr=curr+a[j];
			cout<<curr<<endl;
		}
	}
	
	
	
	return 0;
	
	
}





