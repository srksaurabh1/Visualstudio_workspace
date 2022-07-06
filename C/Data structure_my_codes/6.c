// read floating no.
#include<stdio.h>
int main()
{
    float x;
    int c;
    printf("I/p floating variable: ");
    scanf("%f", &x);
    
    c = x;
    printf("Rightmost Integral part of this number is : %d", c%10);
    // if c%10 - unit digit
    // if c%100 - 10th digit
    return 0;
}