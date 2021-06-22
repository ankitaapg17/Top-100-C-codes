//To find largest and smallest elements from an array
#include <stdio.h>
#include <conio.h>
main()
{
	int arr[10],i,n,j,k,max,min;
	printf("Enter the elements: ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(j=1;j<=9;j++)
	{
		if(max<arr[j])
		{
			max=arr[j];
		}
	}
	printf("The largest: %d\n",max);
	min=arr[0];
	for(k=1;k<=9;k++)
	{
		if(min>arr[k])
		{
			min=arr[k];
		}
	}
	printf("The smallest: %d\n",min);
}




