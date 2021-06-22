//To call a function to read and store in an array
#include<stdio.h>
int call(int a[],int n);
int main()
{
	int i,j,n,p,a[10];
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=call(a,n);
	
}
int call(int a[],int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}
}
