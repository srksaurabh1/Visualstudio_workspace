#include <stdio.h>
#include <stdlib.h>

void main()
{
    
    struct node 
    {
        int data;
        struct node *next;
    
    };
   
   struct node *head, *temp, *newnode;
   newnode =  (struct node*) malloc(sizeof(struct node));
   
   // 1. insertion at beginning
   printf(" Enter data you want to insert in Linklist: ");
   scanf("%d", &newnode -> data);
   newnode -> next = 0;
   temp = head;

   while(temp -> nextnode != 0)
   {
       temp = temp -> next
   }
   temp -> next = newnode;

   // 2. insertion after a given location
   int pos;
   printf(" Enter the position: ");
   scanf("%d", &pos);
   if(pos>count)
   {
       printf("Invalid Poisition");
   }
   else
   {
       temp = head;
       while(i<pos)
       {
           temp = temp -> next;
           i++;
       }
       printf("Enter data: ");
       scanf("%d",&newnode -> data);
       newnode -> next = temp -> next;
       temp -> next = newnode;
   }



}