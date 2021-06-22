//Printing tokens of string in C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    int i;
    scanf("%[^\n]", s);
    int len = strlen(s);
    for(i = 0; i < len; i++) {
        if(s[i] == ' ') {
            printf("\n");
        }
        else {
            printf("%c", s[i]);
        }
    }
    
    return 0;
}
