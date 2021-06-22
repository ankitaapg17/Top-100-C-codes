//Find largest palindrome in an array
//A palindrome is basically any text, numbers or a combination of both,which when read from first or 
//last produces the same output.

//Input the size of array
//Input the elements of the array
//Sort the elements in ascending order
//Check each element from the back weather it's palindrome or not
//Print the longest palindrome

#include <stdio.h>
int main()
{
	int n,i,j,temp,rem,num;
	printf("Enter size: ");
	scanf("%d",&n);
	int arr1[100];
	printf("Enter elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	//sorting of array in ascending order
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr1[i]>arr1[j])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
		}
	}
	for(i=n;i>=0;i--)
	{
		num=0;
		temp=arr1[i];
		while(arr1[i]!=0)
		{
			rem=arr1[i]%10;
			num=num*10+rem;
			arr1[i]=arr1[i]/10;
		}
		if(num==temp)
		{
			printf("Longest palindrome present is %d",num);
			break;
		}
	}
	if(i==-1)
	{
		printf("There is no palindrome number");
	}
}









