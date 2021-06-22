//To calculate HCF of two numbers using recursive function
#include <stdio.h>
int gcd(int,int);

int main()
{
	int i,j;
	printf("\n Enter the numbers:");
	scanf("%d %d",&i,&j);
	printf("\n The GCD of %d and %d is %d",i,j,gcd(i,j));
}

int gcd(int a,int b)
{
	int remainder;
	remainder=a%b;
	if(remainder==0)
	return b;
	else
	return gcd(b,remainder);
}



