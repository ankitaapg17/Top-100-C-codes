#include<stdio.h>
int main()
{
	int i,j,n,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum=sum+j;
		}
	}
	printf("The sum=%d",sum);
	
}
