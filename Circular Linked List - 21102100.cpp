Q. No 1
#include<stdio.h>
#include<stdlib.h> 
struct node{
int data;
struct node*next; };
void linkedlisttraversal(struct node*head){
struct node*ptr=head;
printf("elements:%d\n",ptr->data);
ptr=ptr->next;
dwhile(ptr!= head){ printf("elements:%d\n",ptr->data); ptr=ptr->next;
} }
int main(){
struct node*head;
struct node*second;
struct node*third;
struct node*fourth;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node)); third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node)); head->data=4;
head->next=second;
second->data=3; second->next=third;
third->data=6; third->next=fourth;
fourth->data=1;
fourth->next=head; linkedlisttraversal(head);
return 0; }


Q. No 2:
Practical application of circular linked list;
Circular Linked Lists can be used to manage the computing resources of the computer.
Data structures such as stacks and queues are implemented with the help of the circular linked lists.
Circular Linked List is also used in the implementation of advanced data structures such as a Fibonacci Heap.
It is also used in computer networking for token scheduling
