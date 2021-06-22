//To find all the prime factors of a number
#include<stdio.h>
int check(int i);
int main()
{
	int n,i,k;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)//factors 
		{
			k=check(i);
			if(k==0)
		    {
			printf("%d is a prime factor\n",i);
		    }
		}
		
		
	}
}
int check(int i)
{
	int j,s=0;
	for(j=2;j<i;j++)
	{
		if(i%j==0)//divisible
		{
			s=s+1;
			
		}		
	}
	return(s);
}
