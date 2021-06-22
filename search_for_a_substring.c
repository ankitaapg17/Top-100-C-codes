//Check if a substring is present in the given string
#include <stdio.h>
#include <conio.h>

int main()
{
	char str[100],search[100];
	int count1=0,count2=0,i,j,flag;
	
	puts("Enter a string:");
	gets(str);
	puts("Enter a substring:");
	gets(search);
	while(str[count1]!='\0')
	{
		count1++;
	}
	while(search[count2]!='\0')
	{
		count2++;
	}
	for(i=0;i<=count1-count2;i++)
	{
		for(j=i;j<i+count2;j++)
		{
			flag=1;
			if(str[j]!=search[j-i])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		break;
	}
	if(flag==1)
	printf("Found!!");
	else
	printf("Not found");
}







