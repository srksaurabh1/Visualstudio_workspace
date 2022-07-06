#include <stdio.h>
#include <stdlib.h>

#define N 5 // static memory  allocated
int queue[N]; // queue using array
int front; 
int rear;

void enqueue(int x)
{
    if (rear == N-1) // -1 = null pointer, 0 = 1st element of queue = front, n-1 = last element of queue = rear
    {
        printf("overflow condition");
    }
    else if(front == -1 && rear == -1) // checking if both are poijnting to null
    {
        front = rear = 0; // assigning both to 1st element
        queue[rear] = x; 
    }
    else // when it already contains some elements
    {
        rear++; 
        queue[rear] = x;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty - underflow condition");
    
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("dequeued element: %d\n", queue[front]);
        front++;
    }
} 

void display()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty - underflow condition");
    
    }
    else
    {
        printf("Queue is: ");
        for(int i = front; i < rear + 1; i++)
        {
            printf("%d | ", queue[i]);
    
        }
    }
}

void peek()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty - underflow condition");
    
    }
    else
    {
    printf("\nData at front: %d\n", queue[front]);
    }
}

void main()
{
    enqueue(2); // insert in queue 
    enqueue(5);
    enqueue(-1);
    display(); // dispaly queue
    peek(); // display 1st element w/o deleting it - not like pop
    dequeue(); // delete 1st element
    peek();
    display();
}