// read numbers until -1 is entered and display whether it is an armstrong number or not upto 1000.
#include<stdio.h>

int main()
{
    int arr[10];
    printf("Enter numbers(press -1 to stop) : \n");
    for (int i = 0; i < 10; i++)
    {   
        scanf("%d", &arr[i]);
        if (arr[i]==-1) break;
    }    
    printf("Numbers you entered are : \n");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==-1) break;
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==-1) break;
        if (arr[i]==0 || arr[i]==1 || arr[i]==153 || arr[i]==370 || arr[i]==371 || arr[i]==407) {
           printf("\nArmstrong number : %d", arr[i]); }  
    }
    return 0;
}