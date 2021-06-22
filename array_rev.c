//To reverse an array after copying
#include<stdio.h>
int main()
{
	int i,j,n,a[10],b[10];
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1,j=0;i>=0;i--,j++)//initializing two loops
	{
		b[j]=a[i];
	}
	printf("The array:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("The reversed array:");
	for(j=0;j<n;j++)
	{
		printf("%d",b[j]);
	}
}
