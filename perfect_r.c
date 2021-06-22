//To print all perfect numbers in a given range
#include<stdio.h>
int check(int m);
int main()
{
	int i,n,k;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=check(i);
		if(k==0)
		{
			printf("%d is a perfect number\n",i);
		}
		
	}
}
int check(int i)
{
	int j,s=0;
	for(j=1;j<=i-1;j++)
	{
		if(i%j==0)
		{
			s=s+j;
		}
	}
	if(s==i)
	return 0;
	else
	return 1;
	
	
	
	
}
