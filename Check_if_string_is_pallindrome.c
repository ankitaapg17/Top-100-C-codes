//Check if a string is a Pallindrome with and without using built-in function.
#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,j,chk=1;
	char s[30];
	printf("\n Enter the string: ");
	scanf("%s",s);
	n=strlen(s)-1;
	for(i=0,j=n;i<n/2;i++,j--)
	{
		if(s[i]!=s[j])
		{
			chk=0;
			break;
		}
	}
	if(chk==1)
	{
		printf("String is Pallindrome");
	}
	else
	printf("String is not a Pallindrome");
	
	
	
	
	
}







