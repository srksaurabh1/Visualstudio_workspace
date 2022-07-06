//  Read a character and print it in Uppercase and Lowercase

#include<stdio.h>
#include<ctype.h> //  several functions that are useful for testing and mapping characters 
// C chracter classification

int main()
{
    char i;
    printf("Enter character or Press ! to exit\n");
    scanf("%c", &i); // dont enter a string, for string - %s
    if (i != '!')
    {
        printf("Character is: %c\n",i);         
        printf("ASCII Value is: %d\n",i);       // int value of char
        printf("Lower Case: %c\n",tolower(i));  // lower fn
        printf("Upper Case: %c",toupper(i));    // upper fn
    }
    else printf("Exiting...");
    return 0;
}
