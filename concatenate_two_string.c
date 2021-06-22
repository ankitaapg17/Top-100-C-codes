//Concatenate two strings
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	char str1[MAX_SIZE],str2[MAX_SIZE];
	int i,j;
	printf("Enter first string:");
	gets(str1);
	printf("Enter second string:");
	gets(str2);
	
	//Move till the end of str1
	i=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	//copy str2 to str1
	j=0;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	//make str1 null terminated
	str1[i]='\0';
	printf("Concatenated string:%s",str1);
	
}







