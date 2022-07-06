 #include <stdio.h>

int main()
{
    //single line comment
    
    /* this 
    is a multiline comment
    */
    // int,float,char
    int a =7; // 2-4 bytes depending on architecture
    float b = 0.8; // 4 byte - 6 decimel precision
    char c ='ttttt'; //1 byte
    // "" - string , '' - char

    unsigned short integer = 8;
    long integer1 = 9;
    short integer2 = 7;
    double myfloat1 = 7.45; // 15 decimel precision
    long double myfloat1 = 7.45; //19 decimel precision 




    printf("size taken by int is %d\n", sizeof(int));
    
    printf("%d\n %f\n %c\n",a,b,c);
    printf(" \n hello");
    return 0;
}