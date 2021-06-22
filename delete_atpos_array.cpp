//To delete an element at a specified position in an array
#include <stdio.h>
void main()
{
	int i,a[10],n,pos,item;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position:");
	scanf("%d",pos);
	if(pos>=n+1)
	printf("Deletion not possible");
	else
	{
		for(i=pos-1;i<n-1;i++)
		a[i]=a[i+1];
		for(i=0;i<n-1;i++)
		printf("%d",a[i]);
	}
	
	
	
	
}
