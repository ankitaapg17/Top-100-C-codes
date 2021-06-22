//To delete an element at a specified position in an array
#include <stdio.h>
int main()
{
	int i,a[10],n,pos,item;
	printf("Enter the size of array:");
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
		{
			a[i]=a[i+1];
		}
		n--;
	
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
		
}//check
	
	
	
	
}
