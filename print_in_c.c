//Different ways to print in C
#include<stdio.h>  
main()  
{   
    char x[]="javaTpoint", y[]="javaTpoint";  
    if(x==y){  
     printf("Strings are Equal");  
    }  
}  

//No output


#include<stdio.h>  
main(){   
   char x[] = "Hi\0Hello";  
   printf("%d %d", strlen(x), sizeof(x));  
}  
//2 9



