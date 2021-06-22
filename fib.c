//To generate n fibonacci numbers
#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	if(n==0||n==1)
	{
		printf("%d",n);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	
}
