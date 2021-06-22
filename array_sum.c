//To calculate the sum and average of given array of numbers
#include<stdio.h>
int call(int a[],int n);
int main()
{
	int i,n,p,a[10];
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=call(a,n);
	printf("The sum is: %d\n",p);
	printf("The average is: %d",p/n);
}
int call(int a[],int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
	{
		s=s+a[i];
	}
	return s;
}

