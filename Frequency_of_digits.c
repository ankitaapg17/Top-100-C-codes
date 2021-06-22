#include<stdio.h>
#include<string.h>

//In this problem I have used only scanf ("%s",s) as theres no space in the given string. 
//Now we know the ASCII value of 0 is 48 and that of 9 is 57 . 
//So in this problem treating them as a charater i will search them using ASCII value and get there frequency.

int main()
{ char s[1001],i;
  int f,j;
  scanf("%s",s);
  for(i=48;i<58;i++)
  {   f=0;
      for(j=0;j<strlen(s);j++)
      {
          if(s[j]==i)
          {
              f++;
          }
      }
      printf("%d ",f);
  }
  return 0;

}
