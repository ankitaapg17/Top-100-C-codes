//To print all the non-fibonacci numbers
#include<stdio.h>
int main()
{
	int n,a,b,c,x,d;
	
	a=0;
	b=1;
	c=0;
	printf("Enter the upper range:");
	scanf("%d",&n);
	
	while(c<=n)
	{
		c=a+b;
		a=b;
		b=c;
		d=a+b;
		
		
		for(x=c+1;x<d;x++)
		{
			if(x<=n)
			printf("%d: non-fib number\n",x);
			else
			break;
			
		}
		
	}
}
