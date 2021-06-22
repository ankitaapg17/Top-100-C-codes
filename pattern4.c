#include<stdio.h>
int main()
{
	int i,j,sum=0,n,t,t1,t2;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			t=i;
			t1=t+1;
			t2=t1+1;
			
		}
		sum=sum+ t*t1*t2;
	}
	printf("The sum=%d",sum);
}
