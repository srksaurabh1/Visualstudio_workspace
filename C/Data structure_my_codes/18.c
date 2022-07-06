// add 3 floating point
#include<stdio.h>

int main()
{
    float a, b, c;
    printf("Please enter three numbers you want to add (a,b,c)Format: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("The sum is: %.2f ", a+b+c);
    return 0;
}