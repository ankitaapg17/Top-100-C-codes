//To find the HCF of two numbers
#include<stdio.h>
int main()
{
	int m,n,r;
	printf("Enter the two numbers:");
	scanf("%d %d",&m,&n);
	if(m>n)
	{
		r=m%n;
		while(r>0)
		{
			m=n;
			n=r;
			r=m%n;
		}	
		printf("%d is the HCF of two numbers",n);
	}
	else
	{
		r=n%m;
		while(r>0)
		{
			n=m;
			m=r;
			r=n%m;
		}
		printf("%d is the Hcf of two numbers",m);
	}	
}
