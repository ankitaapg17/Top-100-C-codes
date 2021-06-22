//Factorial of a number using recursion
#include<stdio.h>
#include <stdlib.h>

int fact(int n);

int main()
{
	int n,factorial;
	printf("Enter a number:");
	scanf("%d",&n);
	factorial=fact(n);
	printf("Factorial of %d=%d",n,factorial);
	
}

int fact(int n)
{
	if(n==0)
	return 1;
	else
	return (n*fact(n-1));
}

