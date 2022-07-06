//print all odd numbers from m to n
#include<stdio.h>
int main()
{
    int m, n;
    printf("Enter 1st m no.: ");  scanf("%d", &m);
    printf("Enter 2nd n no.: ");  scanf("%d", &n);
    printf("Odd numbers from %d to %d are : ",m,n);

    for (int i = m; i <= n; i++)
    {
        if (i % 2 == 1) printf("%d ",i); // if == 0 - even, if == 1 - odd  
    }
    return 0;
}