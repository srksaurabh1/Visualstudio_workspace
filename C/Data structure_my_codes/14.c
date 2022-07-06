// area of triangle using func
#include<stdio.h>

void area(float b, float h){
    printf("Base: ");   scanf("%f", &b);
    printf("Height: "); scanf("%f", &h);
    printf("Area of triangle is: %0.2f", 0.5*b*h);
}
int main()
{
    float b,h;
    area(b,h);
    return 0;
}