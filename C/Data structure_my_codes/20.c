// Display sum and average of numbers from 1 to n using for loop
#include<stdio.h>

int main()
{   int total; 
    int sum = 0; 
    float avg;
    printf("Enter a no. n  to get sum & average from 1 to n: ");
    scanf("%d", &total); 

    for (int i = 1; i <= total; i++)
    {
        sum = sum + i;  
    }
    
    printf("Sum : %d\n", sum);
    avg = (float)  sum/total; // typecast -coz in for loop their wont be any real no - infinite loop
    printf("Average: %0.2f\n", avg);

    return 0;
}
