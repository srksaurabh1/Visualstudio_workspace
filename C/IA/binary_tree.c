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
    int x;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("\nEnter the value to be inserted in Binary tree or Enter -1 for no node: ");
    scanf("%d", &x);
    if(x == -1)
    {   
        return 0;
    }
    newnode -> data = x;

    printf("\nLeft child: %d", x);
    newnode -> left = create(); /* it will create another stack(memory) & run the function create again 
    & make a left node until we retunr 0 - by initializong if(x == -1) */
    printf("\nRight child: %d", x);
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