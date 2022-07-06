#include<stdio.h>

int main()
{
    float a;
    printf("Enter your basic pay: ");
    scanf("%f", &a);

    float h = 0.10*a;
    float t = 0.05*a;
    float sal = a + h + t;
    printf("Your Total Salary is : %0.2f\n", sal);    
    return 0;
}

//HRA = House Rent - 10%
//TA = Travelling  - 5 %