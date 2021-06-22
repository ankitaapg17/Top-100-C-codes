#include<stdio.h>
int main()
{
	int a,n,d,rev=0;
	printf("Enter the number:");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	if(rev==a)
	{
		printf("The number is pallindrome");
	}
	else
	{
		printf("Not a pallindrome");
	}
}
