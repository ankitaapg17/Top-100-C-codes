//To count the number of vowels,consonants and digits in a string
#include <stdio.h>
int main()
{
	char a[100];
	int i,vowels,consonants,digits,spaces;
	vowels=consonants=digits=spaces=0;
	printf("Enter the string:");
	gets(a);
	for(i=0;a[i]!='\0';++i)
	{
		if(a[i]==' ')
		{
			++spaces;
		}
		else if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			++vowels;
		}
		else if((a[i]>='a'&& a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
		{
			++consonants;
		}
		else if(a[i]>='0' && a[i]<='9')
		{
			++digits;
		}
		
	}
	printf("Vowels=%d",vowels);
	printf("\nConsonants=%d",consonants);
	printf("\nDigits=%d",digits);
	printf("\nSpaces=%d",spaces);
	
}








