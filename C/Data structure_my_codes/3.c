// count number of vowels
#include<stdio.h>

int main()
{
    char text[50];
    int count = 0;
   
    printf("Enter a text : ");
    // scanf("%s", &text, stdin);
    fgets(text,50,stdin); // stdin is an input stream
    printf("%s",text);

    for (char i = 0; i < 50; i++)
    {
        if ((text[i]=='a' ) || (text[i]=='e') || (text[i]=='i') || (text[i]=='o') || (text[i]=='u') || (text[i]=='A') || (text[i]=='E') || (text[i]=='I')|| (text[i]=='O')|| (text[i]=='U'))
        {
            count += 1;
        }
    }
    printf("Number of Vowels in your text : %d", count);
    return 0;
}