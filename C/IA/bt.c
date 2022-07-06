#include <stdio.h>
#include <stdlib.h>

struct node // to make it global write outside Fn
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create() // pointer to node - it would return struct node* & not int*
{
    struct node *newnode;
    int choice;
    int x;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("\nTo add node press any other key than -1: ");
    scanf("%d", &choice);
    if(choice == -1)
    {   
        return 0;
    }
    printf("\nLeft child: ");
    scanf("%d", &x);
    
    newnode -> data = x;
    newnode -> left = create(); /* it will create another stack(memory) & run the function create again 
    & make a left node until we retunr 0 - by initializong if(x == -1) */
    
    printf("\nRight child: ");
    scanf("%d", &x);
    
    
    newnode -> data = x;
    newnode -> right = create(); /* after statement no. 31 returns value, this will create another stack
    until we return 0 - by initializing if (x == -1) */
    
    return newnode; //return previous stack
}

void main()
{
    struct node *root; // structnode - data type whose address we are going to store in pointer root
    root = 0;
    root = create(); //1st element
}