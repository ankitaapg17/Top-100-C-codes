#include<stdio.h>
int main()
{
	int i,j,n,t,t1,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		t=2*i-1;
		t1=2*i+1;
		sum=sum+ t*t1;
	}
	printf("The sum=%d",sum);
}
