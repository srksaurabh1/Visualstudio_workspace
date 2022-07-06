// calculate area of triangle using pointers
#include<stdio.h>

int main()
{
    float b, h, *p1 = &h, *p2 = &b, area;
    printf("Height: "); scanf("%f", &(*p1)); 
    printf("Base: ");   scanf("%f", &(*p2));
    area = 0.5*(*p1)*(*p2);
    printf("Area of triangle is : %.2f", area);

    return 0;
}

