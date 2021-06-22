#include <stdio.h>
#include <conio.h>

int delete(int a[50],int n)
{
	int i,pos;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("Enter the position to be deleted from:");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	a[i]=a[i+1];
	n--;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}

main()
{
	int a[10],i,n,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	p=delete(a,n);
	
}







