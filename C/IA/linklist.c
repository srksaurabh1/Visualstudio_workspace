// learning link-list for assignment no.1

#include <stdio.h>
#include <stdlib.h>

void main()
{
    // struct node = data type

    struct node
    {
        int data;
        struct node *next;
    };
    // ; after struct

    struct node *head, *newnode, *temp;
    // head pointer - struct node - data type
    
    head = 0;
    int choice = 1  ;
    int count =0;

    // malloc fn - C, new fn - C++
    // dynamic memory allocation
    // malloc(sizeof(struct node))
    while (choice == 1)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("enter data \n");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;

        //arror operator = ->
        // dot operator = .
        //data type - int = %d

        if(head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode; 
        }
        printf("Do you want to continue (0,1)? \n");
        scanf("%d", choice);
        temp = head;
        while (temp != 0)
        {
            printf("\n %d", temp -> data);
            temp = temp -> next;
            count++;    
        }
        printf("%d", count);
    }
}