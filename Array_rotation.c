//Arrays

//Array rotation

#include <stdio.h>

int rotLeft(int arr[], int n, int d)
{
	int i,j;
	int first;
	for(i=0;i<d;i++)
	{
		first=arr[0];
		for(j=0;j<n-1;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[j]=first;
	}
	return *arr;
}

int rotRight(int arr[], int n, int d)
{
	int i,j;
	int first;
	for(i=0;i<d;i++)
	{
		first=arr[n-1];
		for(j=n-1;j>=0;j++)
		{
			arr[j]=arr[j-1];
		}
		arr[0]=first;
		
	}
	return *arr;
}

int main()
{
	int n,d,i;
	char choice;
	scanf("%d",&n);
	int list[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&list[i]);
	}
	scanf("%d",&d);
	scanf("%c",&choice);
	if(choice=='L')
	{
		rotLeft(list,n,d);
		for(i=0;i<n;i++)
		{
			printf("%d",list[i]);
		}
	}
	else if(choice=='R')
	{
		rotRight(list,n,d);
		for(i=0;i<n;i++)
		{
			printf("%d",list[i]);
		}
		
	}
	else
	{
		printf("Not valid");
	}
	
}

