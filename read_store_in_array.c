#include <stdio.h>
#include <conio.h>

int call(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
}

int main()
{
	int a[10],i,n,p;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=call(a,n);
}



