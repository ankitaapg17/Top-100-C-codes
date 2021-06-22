#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the upper limit of range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("Even number:%d\n",i);
		}
		else
		{
			printf("Odd number:%d\n",i);
		}
	}
}
