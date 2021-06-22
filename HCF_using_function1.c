//HCF using function
#include<stdio.h>

int GCD(int,int);

int main(void)
{
	int i,j,n;
	printf("\n Enter two numbers:");
	scanf("%d %d",&i,&j);
	n=GCD(i,j);
	printf("\n GCD of %d and %d is %d\n",i,j,n);
}

int GCD(int x,int y)
{
	int remainder;
	if(x>y)
	{
		remainder=x%y;
		while(remainder!=0)
		{
			x=y;
			y=remainder;
			remainder=x%y;
		}
		return(y);
	}
	else
	{
		remainder=y%x;
		while(remainder!=0)
		{
			y=x;
			x=remainder;
			remainder=y%x;
		}
		return(x);
	}
	
	
}













