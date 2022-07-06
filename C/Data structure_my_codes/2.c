#include <stdio.h>

void main()
{
    int sum = 0;
    for (int i = 1; i <= 200 ; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("The Sum of 1st 200 even no. is: %d", sum);
}