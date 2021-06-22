#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n==1)
	{
		printf("Not prime");
		
	}
	else
	{
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+1;
		}
	}
	if(s==0)
	{
		printf("The number is prime");
	}
	else
	{
		printf("Not a prime number");
	}
}
}
