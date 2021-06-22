//Count a total number of duplicate elements in an array
#include <stdio.h>
void main()
{
	int arr1[100],arr2[100],arr3[100],n,mm=1,ctr=0;
	int i,j;
	printf("Input the number of elements to be stored:");
	scanf("%d",&n);
	
	printf("Input %d elements in the array: \n",n);
	for(i=0;i<n;i++)
	{
		printf("element-%d: ",i);
		scanf("%d",&arr1[i]);
	}
	//Copy in another array
	for(i=0;i<n;i++)
	{
		arr2[i]=arr1[i];
		arr3[i]=0;
	}
	//Mark the elements are duplicate
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr1[i]==arr2[j])
			{
				arr3[j]=mm;
				mm++;
			}
		}
		mm=1;
	}
	//Prints the array
	for(i=0;i<n;i++)
	{
		if(arr3[i]==2)
		{
			ctr++;
		}
	}
	printf("The total number of duplicate elements:%d ",ctr);

	printf("\n");
}







