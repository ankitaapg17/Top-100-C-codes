//To insert an element at a specified position in an array
#include <stdio.h>
#include <conio.h>

int main()
{
	int i,a[5],n,pos,item,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position: ");
	scanf("%d",&pos);
	printf("Enter the item to be inserted:");
	scanf("%d",&item);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=item;
	for(j=0;j<=n;j++)
	{
		printf("%d\n",a[j]);
	}
	
}
