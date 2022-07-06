#include <stdio.h>
#include <stdlib.h>

int n;
int stack[n];
int top = -1;

void push()
{
    int x ;
    printf("Enter data: ");
    scanf("%d", &x);

    if(top == n-1)
    {
        printf("\noverflow condition\n");
    }
    else
    {
        top++;
        stack[top] = x;
        printf("\n %d", stack);
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        printf("\nunderflow\n");
    }
    else
    {
        item = stack[top];
        top--;
        //printf("item deleted is %d", item);

    }
}

void peek()
{
    if(top == -1)
    {
    printf("\n underflow \n");
    }
    else
    {
        printf("%d", stack [top]);
    }
}

void display()
{
    for (int i = top; i>=0; i--)
    {
        printf("\n %d \n", stack[i]);
    }
}

void main()
{
    void push();
    void pop();
    void peek();
    void display();
}
