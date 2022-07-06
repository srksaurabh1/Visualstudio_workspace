#include<stdio.h>

int main()
{   
    float a= 30.253;
    // printf("1 :");
    printf("%0.2e\n", a);
    printf("%0.4e\n", a);
    printf("%0.8e\n", a);  
    return 0;
}

// %E - Exponential Format/Scientif Notation(in upper case)
// %e - lower case
//Example:
//  I = printf("%12.5e", 30.253);
//  O = 3.02530e+001
