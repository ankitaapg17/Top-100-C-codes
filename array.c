//To read and store an array
#include<stdio.h>
int main()
{
	int i,n,a[10];
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
}
