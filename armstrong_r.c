//To find and print armstrong number in a given range for any number of digits
#include<stdio.h>
int check(int num);
int main()
{
	int n,i,k;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=check(i);
		if(k==0)
		{
			printf("%d is an armstrong number\n",i);
		}
		
	}
}

int check(int num)
{
	int j,d,cube,s=0,t,count=0;
	int l=num;
	int x=num;
	while(x!=0)
	{
		t=x%10;
		count=count+1;
		x=x/10;
	}
	while(l!=0)
	{
		d=l%10;
		cube=pow(d,count);
		s=s+cube;
		l=l/10;	
	}
	if(s==num)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
	
	
}
