// add two floating point numbers using pointers and functions
#include<stdio.h>

void sumOfFloat(float *ptr1, float *ptr2){
    printf("Enter 1st floating point number : "); scanf("%f", &(*ptr1));
    printf("Enter 2nd floating point number : "); scanf("%f", &(*ptr2));
    float sum = *ptr1 + *ptr2;
    printf("Sum is : %0.2f", sum);
}

int main()
{
    float a, b, *p1, *p2;
    p1=&a;
    p2= &b;
    sumOfFloat(p1,p2);
    return 0;
}