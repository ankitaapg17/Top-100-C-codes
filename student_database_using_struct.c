//Create an array of 30 structure variables and all the members of each variable and print them.
#include <stdio.h>


struct student
{
	int roll;
	float marks;
	char name[30];
	
}s[3];
int main()
{
	int i;
	printf("Enter information:\n");
	for(i=0;i<3;++i)
	{
		s[i].roll=i+1;
		printf("For roll number :%d\n",s[i].roll);
		printf("Enter a name:\n");
		scanf("%s",&s[i].name);
		printf("Enter marks:\n");
		scanf("%f",&s[i].marks);
		printf("\n");
	}
	
	printf("Displaying info:\n");
	for(i=0;i<3;i++)
	{
		printf("Roll number:%d\n",s[i].roll);
		printf("Name:%s",s[i].name);
		printf(" Marks:%f\n",s[i].marks);
	}
}



