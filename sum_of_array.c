//To calculate sum and average of elements present in an array
#include <stdio.h>
#include <conio.h>

int main()
{
	int s[10],sum=0,n,i;
	float avg=0.0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+s[i];
	}
	avg=sum/n;
	printf("The sum is: %d",sum);
	printf("The average is: %f",avg);
}


