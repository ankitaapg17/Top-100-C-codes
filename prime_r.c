#include<stdio.h>
int check(int l);
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
			printf("\n %d is prime",i);
		}
	}
}

int check(int l)
{
	int j,s=0;
	if(l==1)
	{
		printf(" 1 is not prime");
	}
	else
	{
		for(j=2;j<l;j++)
	{
		if(l%j==0)
		{
			s=s+1;
		}
	}
	return(s);
	
	}	
}
