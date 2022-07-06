#include <stdio.h>
#include <stdlib.h>

int main()
{
   int size;
   printf("Enter the value of size of array");
   scanf("%d", size);
   int arr[size];

   for (int i =0; i < size; i++)
   {
     scanf("enter the value of %d th element %d", i , &arr[i]);
   }
   for(int i = 0; i < size; i++)
   {
     printf("The %dth element is: %d", i, arr[i]);
   }
return 0;
}
