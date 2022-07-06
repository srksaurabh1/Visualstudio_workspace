// print all prime numbers from m to n
#include<stdio.h>
int main()
{
    int m, n, ind;
    printf("Enter 1st m No: "); scanf("%d", &m);
    printf("Enter 2nd n NO: "); scanf("%d", &n);
    printf("Prime No. from %d to %d are: ", m,n);
    for (int i = m; i <= n; i++)
    {
        if (i==0 || i==1) continue;
        ind= 1;

        for (int j = 2; j < i; j++)
        {
            if ((i%j)==0){ // means m = n
                ind = 0;  
                break;}
        } 
        if (ind==1) printf("%d ", i);
    }
    return 0;
}