#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,n;
	float sum=0.0,k,p,s;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=2*i-1;
		k=pow(j,2);
		p=pow(j,3);
		s=k/p;
		sum = sum+s;
	}
	printf("The sum=%f",sum);
}
