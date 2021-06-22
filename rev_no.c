#include<stdio.h>
int main()
{
	int d,n,rev=0;
	printf("Enter the number to be reversed:");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		rev=rev*10 + d;
		n = n/10;
		
	}
	printf("The reversed string is:%d",rev);
}
