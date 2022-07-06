// SI + CI
#include<stdio.h>
#include<math.h>
// SI = (p*r*t)/100 , CI = p*(1+r/100)^t - p 
// pow() func ->  #include<math.h>

int main()
{
    float p, r, t;

    printf("Enter amount: "); 
    scanf("%f", &p);
    printf("Enter the rate of interest(in %): ");
    scanf("%f", &r); 
    printf("Enter the Time of inverstment:");
    scanf("%f", &t);

    printf("SI : %0.3f\n", (p*r*t)/100);                // 0.3 - point 3 decimal poitns - accuarcy
    printf("CI : %0.3f\n", p*pow((1+r/100), t) - p);
    
    return 0;
}
