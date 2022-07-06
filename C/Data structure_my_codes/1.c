#include<stdio.h>

void main()
{
    int a[20] = {NULL};
    printf("\nPlease enter any 10 integers:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The numbers you entered are :\n");
    
    for (int i =0 ; i < 10; i = i + 3 )
    { 
        if(a[i+1] != NULL && a[i+2] != NULL)
        { 
            printf("%d, %d, %d,\n", a[i], a[i+1], a[i+2]);  
        }
        else if(a[i+2] == NULL)
        {
            printf("%d ", a[i],a[i+1]);
        }
    }
}
