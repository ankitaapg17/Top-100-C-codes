#include<stdio.h>
int main()
{
	int i,n;
	float sum=0.0;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1.0/i);
		
	}
	printf("The sum=%f",sum);
}
