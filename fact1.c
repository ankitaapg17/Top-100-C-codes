#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,q,p;
	float k,sum=0.0;
	printf("Enter the number:");
	scanf("%d",&q);
	for(i=1;i<=q;i++)
	{
		k = pow(-1.0,i);
		p = 2*i-1;
		sum = sum + k*1.0/fact(p);
	}
	printf("The sum=%f",sum);
	
}
int fact(int n)
{
	if(n==0)
	{
		return(1);
	}
	else
	{
		return(n*fact(n-1));
	}
}
