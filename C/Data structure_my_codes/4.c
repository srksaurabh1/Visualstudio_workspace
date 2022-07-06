#include <stdio.h>

int main()
{
    char add[50];
    printf("Input your address: ");
    gets(add);
    printf("Your address in one line: %s", add);
    printf("\nYour address in multiple lines:\n");
    for (int i=0; i<20 ; i++)
    {
        if(add[i] == '\0')
        {
            printf("\n%s",add[i]);
        }
        else
        {
            printf("%s",add[i]);
        }
    }
    return 0;
}

// Wcl colony shaktinagar durgapur
// error in program - do with a fresh mind
