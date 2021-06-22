#include<stdio.h>
int main()
{
	int n,i,j,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum=sum+i;
		}
	}
	printf("The required sum=%d",sum);
}
