#include <stdio.h>
#include <stdlib.h>
// using linklist
struct node 
{
    int data;
    int *next;
} *front = 0, *rear = 0;

void enqueue(int x) // why initializing again - variables in fn are private
{
    struct node *newnode;
    newnode = (struct node *) malloc(sizeof(struct node));
    // malloc will return void pointer = starting address
    // that is why we need to typecast**
    newnode -> data = x;
    newnode -> next = 0;
    if(front == 0 && rear ==0)
    {
        front = rear = newnode;
    }
    else
    {
        rear -> next = newnode;
        rear = newnode;
    }
}

void dequeue()
{
    struct node *temp;
    temp = front;
    if(front == 0 && rear ==0)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("\ndeleted element %d\n", front -> data);
        front = front -> next;
        free(temp); // will free this garbage value from memory allocated
    }
}

void display()
{
    struct node *temp;
    if(front == 0 && rear ==0)
    {
        printf("\nqueue is empty\n");
    }
    else
    {
        temp = front;
        while(temp != 0)
        {
            printf("%d | ", temp -> data);
            temp = temp -> next;
        }
    }
}

void peek()
{
    if(front == 0 && rear ==0)
    {
        printf("\nqueue is empty\n");
    }
    else
    {
        printf("\nthe front data is %d\n", front -> data);
    }
}

void main()
{
 int x, size, choice;
 while(1)
 {
     printf("\n1. Enqueue\n2. Dequeue\n3. Peek \n4. Display \n5. Exit\n");
     printf("Enter your choice: ");
     scanf("%d", &choice); /* & pointer stores the value of the adrress
      & - if added - then we pass the value of choice with therir address too
      hence we i/p value of choice and complier assigns a address from that in memory
      which we can call/use letter, or while initializing a function*/
    switch (choice)
    {
    case 1: 
        printf("\nEnter the number of elements you want to insert in Queue: ");
        scanf("%d", & size);
        printf("\nEnter elements you want to be inserted: ");
        for (int i=0; i < size; i++)
        {
            scanf("%d", &x);
            enqueue(x);
        } break;
    case 2: dequeue(); break;
    case 3: peek(); break;
    case 4: display(); break;
    case 5: exit(0); break;
    default: printf("\ninvalid choice\n"); break;
    }
 }
 system("clear");
}