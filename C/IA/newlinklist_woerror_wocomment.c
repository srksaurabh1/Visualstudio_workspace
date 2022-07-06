#include <stdio.h>
#include <stdlib.h>

void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    
    struct node *head, *newnode, *temp;
      
    head = 0;
    int choice;
    int count = 0 ;

    while (choice)  //if we put choice == 1 - infinite loop
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("Enter data in linked-list: ");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;

        if(head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode; 
        }
        
        printf("Do you want to continue, press any key other than 0: ");
        scanf("%d", &choice);
    }
        temp = head;
        
        while (temp != 0)
        {
            printf("%d ", temp -> data);
            temp = temp -> next;
            count++;    
        }
        printf("\nCount =  %d", count);
    
}