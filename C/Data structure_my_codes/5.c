// read two floating point numbers
#include<stdio.h>

int main()
{
    float a,b;
    int sum;

    printf("Enter 1st number : "); scanf("%f",&a);
    printf("Enter 2nd Number : "); scanf("%f",&b);
    
    sum = a+b;

    printf("3 Variables are %f , %f , %d \n", a,b,sum);
    printf("Sum : %d", sum);
    return 0; 
}
