#include <stdio.h>
#include <stdlib.h>

void main()
{
    int size;
    printf("How many numbers you want to store in array: "); // > 1000 numbers
    scanf("%d", &size);
    float array[size]; // first input size after initialize array
    printf("Enter element of array\n ");
    for (int i=0 ;i < size ; i++)
    {
       
        scanf("%f", &array[i]); //why & pointer - Points to the whole array arr.
// w/o & - Points to 0th element of the arr

    }
    
    printf("The array: [ ");
        for(int i=0 ; i<size ; i++)
        {
            printf("%f ", array[i]); //for accessing array & operator is not required
        }
   printf("]");
}