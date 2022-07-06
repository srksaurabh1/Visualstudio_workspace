#include <stdio.h>
#include <stdlib.h>
 
struct node 
{
    int data;
    struct node *next;
} *front, *back;
 
void initialize() //Creating an empty queue
{
    front = back = NULL; // at start both pointer should be pointing to -1
}
 
int getQueueSize() // Returns queue size
{
    struct node *temp = front;
    int count = 0;
     
    if(front == NULL && back == NULL)
        return 0;
    while(temp != back)
    {
        count++;
        temp = temp->next;
    }
    if(temp == back)
        count++;     
    return count;
}
 
int getFrontElement() //Returns Frnt Element of the Queue
{
    return front->data;
}
 
int getBackElement() // Returns the Rear Element of the Queue
{
    return back->data;
}
  
void isEmpty() // Check's if Queue is empty or not
{
    if (front == NULL && back == NULL)
        printf("Empty Queue\n");
    else
        printf("Queue is not Empty\n");
}

void enqueue(int num) // Insertion is known as enqueue - rear end(tail)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->next = NULL;
     
    if (back == NULL) 
    {
        front = back = temp;
    } 
    else 
    {
        back->next = temp;
        back = temp;
    }
}
 
void dequeue() // deletion is known as dequeue from front end(head)

{
    struct node *temp;
    if (front == NULL) 
    {
        printf("\nQueue is Empty \n");
        return;
    } 
    else 
    {
        temp = front;
        front = front->next;
        if(front == NULL)
        {
            back = NULL;
        }
        printf("Removed Element : %d\n", temp->data);
        free(temp);
    }
}
  
void printQueue() // Print's Queue
{
    struct node *temp = front;
  
    if ((front == NULL) && (back == NULL)) 
    {
        printf("Queue is Empty\n");
        return;
    }
 
    while (temp != NULL) 
    {
        printf("%d", temp->data);
        temp = temp->next;
        if(temp != NULL)
            printf("-->");
    }
}
 
int main() 
{
    initialize(); // Initializing Queue
// Adding elements in Queue
    enqueue(1);
    enqueue(3);
    enqueue(7);
    enqueue(5);
    enqueue(10);

    printQueue(); //Printing Queue
    printf("\nSize of Queue : %d\n", getQueueSize()); // Printing size of Queue
    printf("Front Element : %d\n", getFrontElement()); // Printing front and rear element of Queue
    printf("Rear Element : %d\n", getBackElement());
// Removing Elementd from Queue 
    dequeue();
    dequeue();
    dequeue();
    dequeue();    
    dequeue();
    dequeue();
     
    return 0;
}