//To find largest and second largest elements from an array
#include <stdio.h>
main()
{
	int arr[10],i,n,j,k,max,smax;
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
	printf("max=%d",max);
	smax=arr[0];
	for(k=0;k<=9;k++)
	{
		if(arr[k]<max && arr[k]>smax)
		{
			smax=arr[k];
		}
	}
	printf("smax=%d",smax);
	
	
	
}
