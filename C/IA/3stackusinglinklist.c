#include<stdio.h>
#include<stdlib.h>

struct node // always write before main
{
    int data; //why not innitiate data here - error -it is data declaration ie no memory allocation
    struct node *previous; //why previous and not next node - coz in stack node stores address of pervious node
}*top = NULL; // Declaring here would make it Global**, also at start stack is empty = NULL

void push(int);
void pop();
void display();

int main()
{
    int choice, value;
    printf("\nStack by Link list\n");
    while(1)
    {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter choice: ");
        scanf("%d",&choice); //& pointer stores the value the adrress
        switch(choice)
        {
            case 1: printf("\nEnter element: ");
            scanf("%d", &value);
            push(value);
            break;

            case 2: pop();
            break;

            case 3: display();
            break;
            

            case 4: exit(0);
            break;

            default: printf("\nInvalid Choice\n\n");
        }
    }
}

void push(int value)  // why again initializing it again - coz fn values are private by default (main also)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = value; // get value for the node
    if(top == NULL)
        newnode -> previous = NULL;
    else
        newnode -> previous = top; // Make the node as Top
    top = newnode;
    printf("\nNode has been Inserted\n\n");
}

void pop()
{
    if(top == NULL)
        printf("\nEmpty stack\n\n");
    else
    {
        struct node *temp = top;
        printf("\nPopped Element : %d", temp->data);
        printf("\n");
        top = temp->previous; // After popping, make the previous node as TOP
        free(temp);
    }
}

void display()
{
// Print the stack
    if(top == NULL)
        printf("\nEmpty stack\n");
    else
    {
        printf("The stack is: \n");
        struct node *temp = top;
        while(temp -> previous != NULL)
        {
            printf("%d\n",temp -> data);
            temp = temp -> previous;
        }
    printf("%d\nNULL\n\n",temp->data); //bottom element of stack points to null - opp of linklist
    }
}