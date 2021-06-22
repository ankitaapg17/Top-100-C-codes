//Fibonacci series with recursive function
#include<stdio.h>
#include<stdlib.h>

int fib(int);//check
int main()
{
	int i,j;
	printf("\n Enter the number of terms:");
	scanf("%d",&i);
	if(i<0)
	{
		printf("not valid");
	}
	else
	{
		printf("\n Fibonacci sequence for %d is",i);
		for(j=0;j<=i;j++)
		{
			printf("%d",fib(j));
		}
	}
	
	
	
}

int fib(int val)
{
	if(val<=2)
	return 1;
	else
	return (fib(val-1)+fib(val-2));
}


