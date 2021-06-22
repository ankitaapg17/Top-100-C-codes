//Count the sum of numbers in a string
#include <stdio.h>

int main()
{
	//Initialising variables
	char str[100];
	int i,sum=0;
	
	//Accepting inputs
	printf("Enter the string:\n");
	gets(str);
	
	//Iterating each character through the loop
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='0')&&(str[i]<='9'))
		{
			sum+=(str[i]-'0');
		}
	}
	printf("Sum of all the digits:\n%d",sum);
}






