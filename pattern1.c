#include<stdio.h>
int main()
{
	int n,i,j,t,t1,t2,t3,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			
			t1=i;
			t2=t1+1;
			t3=t2+1;		
		}
		sum = sum+t1*t2*t3;	
	}
	printf("The sum=%d",sum);
}
