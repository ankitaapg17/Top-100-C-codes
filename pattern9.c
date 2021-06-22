#include<stdio.h>
int main()
{
	int i,j,n,f=1,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
		sum=sum+f;
	}
	printf("The sum=%d",sum);
}
