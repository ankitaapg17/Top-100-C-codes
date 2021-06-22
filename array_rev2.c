//To print array in reverse
#include<stdio.h>
int main()
{
	int i,j,n,a[10];
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
