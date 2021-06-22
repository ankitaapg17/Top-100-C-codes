//To calculate the factorial of a number using function
#include <stdio.h>

int fact(int n);
int main()
{
	
	int i,n,f=1,factorial;
	printf("Enter a number:");
	scanf("%d",&n);
	factorial=fact(n);
	printf("Factorial of the number=%d",factorial);
	
}

int fact(int n)
{
	int i;
	int f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return(f);
	
	
	
}
