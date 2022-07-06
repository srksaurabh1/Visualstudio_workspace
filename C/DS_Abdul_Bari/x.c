#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a =10;
    int *p1;
    p1 = &a;
    printf("%d\n%d",a, *p1);

}