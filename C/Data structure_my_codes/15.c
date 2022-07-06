// Is a no. divisible by 2 using functions
#include<stdio.h>

void db2(int num){
    printf("Enter a Number :"); scanf("%d", &num);
    if (num % 2 == 0) 
    {
        printf("Number is divisible by 2.\n");
    }
    else printf("Number is not divisible by 2.");
}

int main()
{
    int num;
    db2(num);    
    return 0;
}