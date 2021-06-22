//To print all strong numbers in a given range
#include<stdio.h>
int strong(int num);
int main()
{
	int i,n,k;
	printf("Enter the upper limit of range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=strong(i);
		if(k==0)
		{
			printf("%d is a strong number\n",i);
		}
	}
	
}

int strong(int num)
{
	int j,d,s=0,f;
	int number=num;
	while(num!=0)
	{
		d=num%10;
		f=1;
		for(j=1;j<=d;j++)
		{
			f=f*j;
		}
		s=s+f;
		num=num/10;
	}
	if(s==number)
	{
		return 0;
	}
}
