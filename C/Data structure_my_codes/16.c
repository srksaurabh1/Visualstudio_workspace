// Printf 'Programming in C is Fun' using pointers - *
#include<stdio.h>

int main()
{
    char string[]= {"Programming in C is fun..."}; // array of string
    char *p; 
    p = string; // assignment makes pointer from integer without a cast
    // *p = string - stores the address of the string in p 
    // p = &string - stores the address of the string in p
    //  p = string - stores the value of string in p
    printf("%s",p);
    return 0;
}