#include<stdio.h>
#include<conio.h>
int counter(int arr[10],int freq[10],int size)
{
	int i,j,count;
     for(i=0;i<size;i++)
	 {
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				freq[j]=0;
			}
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	}
	printf("\nFrequency of all elements of array:\n");
	for(i=0;i<size;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d occurs %d times\n",arr[i],freq[i]);
		}
	}	
}
int main()
{
	int arr[10],freq[10],c;
	int size,i,j,count;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	c=counter(arr,freq,size);
}
