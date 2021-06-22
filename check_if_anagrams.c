//Check if two strings are anagrams or not

//Take two strings as input and store them in the arrays arr1[] and arr2[] resp.
//In the function find_anagram() using while statement sort both the arrays. After sorting compare them using
//for loop
//If all the strings are equal then the two strings are anagrams

//An anagram is a word formed by rearranging the letters of a different word, using all the original letters
//exactly once
//adobe:abode, binary:brainy

//Or
//Count the frequency of alphabets in both the strings and store them in respective arrays. If the two arrays
//are equal, return true.Else, return false

#include <stdio.h>

int find_anagram(char [], char []);

int main()
{
	char array1[100],array2[100];
	int flag;
	
	printf("Enter the string\n");
	gets(array1);
	printf("Enter the second string:\n");
	gets(array2);
	flag=find_anagram(array1,array2);
	if(flag==1)
	{
		printf("They are anagrams");
	}
	else
	{
		printf("Not anagrams");
	}
}

int find_anagram(char array1[], char array2[])
{
	int num1[26]={0}, num2[26]={0},i;
	
	while(array1[i]!='\0')
	{
		num1[array1[i]-'a']++;
		i++;
	}
	i=0;
	while(array2[i]!='\0')
	{
		num2[array2[i]-'a']++;
		i++;
	}
	for(i=0;i<26;i++)
	{
		if(num1[i]!=num2[i])
		return 0;
	}
	return 1;
	
	
}





