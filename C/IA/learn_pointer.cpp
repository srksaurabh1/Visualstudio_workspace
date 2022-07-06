#include <stdio.h>

int main()
{
    int a[5], i;
    int *q = a;
    for (i=0; i<5 ; i++)
    {
        printf("\n enter the value of element \n %d ", i);
        scanf("%d ", a[i]);
    }
    printf("%d", a);
    printf("%d", &a);
    printf("%d", &q);
    printf("%d", &a); 
return 0;
}