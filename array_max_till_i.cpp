//Given an array a[] of size n. For every i from 0 to n-1 output max(a[0],a[1],...,a[i]).
//[1 0 5 4 6 8]
//[1 1 5 5 6 8]
//Not decreasing
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int mx=-1999999;
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		mx=max(mx,a[i]);
		cout<<mx<<endl;
	}
	return 0;
}







