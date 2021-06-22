#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,k;
	float sum=0.0,p;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p= 1.0/pow(i,i);
		sum=sum+p;
		
	}
	printf("The sum=%f",sum);
	
}
