//Insert an element in location i

#include <stdio.h>
#include <conio.h>

int insert(int a[50],int n)
{
	int i,pos,item;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("Enter item to be inserted:");
	scanf("%d",&item);
	printf("Position to be inserted in:");
	scanf("%d",&pos);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=item;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	
}

int main()
{
	int a[10],i,n,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=insert(a,n);
	
	
	
}

