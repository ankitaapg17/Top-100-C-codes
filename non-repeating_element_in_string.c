//Find non repeating characters in a string
//Initialise the variables, accept the input, initialize a for loop, this loop will calculate 
//the frequency of each character
//print the characters having frequency one

#include <stdio.h>

int main()
{
	//Initialising variables.
	char str[100];
	int i;
	int freq[256]={0};
	
	//Accepting inputs
	printf("Enter the string: ");
	gets(str);
	
	//Calculating frequency of each character
	for(i=0;str[i]!='\0';i++)
	{
		freq[str[i]]++;
	}
	printf("The non repeating characters are: ");
	for(i=0;i<256;i++)
	{
		if(freq[i]==1)
		{
			printf("%c",i);
		}
	}
	
}





