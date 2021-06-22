#include<stdio.h>
int main()
{
	int i,n,a,s=0,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		s=s+a;
		count=count+1;
		n=n/10;
	}
	printf("The sum of digits:%d\n",s);
	printf("The number of digits:%d\n",count);
	
	
}
