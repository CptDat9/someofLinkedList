#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;

}Node;
typedef struct Linkedlist
{
    Node* head;
    Node* tail;
}LinkedList;

Node* CreatNode(int init_data)
{
    Node* node = new Node;
    node->data = init_data;
    node->next = NULL;
    return nodel
}
void CreateList(struct LinkedList* l, struct Node* node)
{
   
    
        l->head = node;
        l->tail = node;
   
}
void AddHead(struct LinkedList* l, struct Node* node)
{
    if(l->head == NULL)
    {
        l->head = node;
        l->tail = node;
    }
    else
    {
       node->next=l->head;
       l->head = node;

    }
}
void AddTail(struct LinkedList* l, struct Node* node)
{
       if (l->tail == NULL)
       {
        l->head = node;
        l->tail = node;
       }
       else{
       l->tail->next=node;
       l->tail = node;
       }
}
void InsertAfterQ(struct LinkedList* l, struct Node* p, struct Node* q)
{
    if (q != NULL)
    {
        p->next = q->next;
        q->next = p;
        if (l->tail == q)
            l->tail = p;
    }
    else
    {
        AddHead(l, p);
    }
}
