// smallest of 3 integers using funct
#include<stdio.h>

void func_small(int *arr)
{
    int min = arr[0];
        for (int i = 0; i < 3; i++)
        {
            if(arr[i]<min) 
            {
                min=arr[i];
            }
    
        }
    printf("Smallest Of 3 Integers is : %d" ,min);
}

int main()
{
    int arr[3];
    printf("Enter 3 integer numbers :\n");
    for (int i = 0; i <3; i++) 
    {
        scanf("%d",&arr[i]);
    }
    func_small(arr);

    return 0;
}
