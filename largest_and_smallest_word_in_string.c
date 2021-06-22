//To find the largest and smallest word in a string
//Define a string, convert the string to lowercase
//Add an extra space at the end.
//Now iterate through the string till space is found and add those character into variable word
//Add each word into words array. Array words will hold all the words present in the string
//Initialize variable small and large with first word of array
//Iterate and check for smallest and largest word
#include <stdio.h>
#include <string.h>

int main()
{
	char string[]="I am Ankita";
	char words[100][100],small[100],large[100];
	int i=0,j=0,k,length;
	
	//Split the string into words such that each row of array words represents a word
	for(k=0;string[k]!='\0';k++)
	{
		//Here, i represents row and j represents column of two-dimensional array words
		if(string[k]!=' '&&string[k]!='\0')
		{
			words[i][j++]=string[k];
		}
		else
		{
			words[i][j]='\0';
			//Increment row count to store new word
			i++;
			//Set column count to 0
			j=0;
		}
		
	}
	//Store row count in variable length
	length=i+1;
	//Initialize small and large with first word in the string
	strcpy(small,words[0]);
	strcpy(large,words[0]);
	
	//Determine smallest and largest word in the string
	for(k=0;k<length;k++)
	{
		if(strlen(small)>strlen(words[k]))
		{
			strcpy(small,words[k]);
		}
		if(strlen(large)<strlen(words[k]))
		{
			strcpy(large,words[k]);
		}
	}
	printf("Smallest word:%s\n",small);
	printf("Largest word:%s\n",large);
	
}





