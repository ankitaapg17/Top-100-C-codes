//To print the perfect numbers
#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n-1;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==n)
	{
		printf("%d is a perfect number",n);
	}
	else
	{
		printf("Not a perfect number");
	}
}
