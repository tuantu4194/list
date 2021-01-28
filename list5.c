#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *f;

struct LinkedList{
    int data;
    struct node *pnext; // pointer next
 };

typedef struct node NODE; // struct note = NODE

struct list
{
    NODE *pHead;
    NODE *pTail;
}

typedef struct list LIST;

node Create(LIST &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

NODE *createNode(int x)
{
    NODE *p = new NODE;
    if ( p == NULL )
    {
        printf('\n Have error');
        return NULL;
    }
    p->data = x;
    p->pNext = NULL; // first don't have connection
    return p;
}

void AddHead(LIST &l, NODE *p)
{
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = p;
    }
    else
    {
        p->pNext = l.pHead;
        l.pHead = p;
    }
}

void AddTail(LIST &l, NODE *p)
{
    if (*l.pHead == NULL)
    {
        l.pHead = l.pTail = p;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void output(LIST l)
{
    for (NODE *k = l.pHead; k!= NULL; k = k->pNext)
    {
        printf(k->data);
        printf("    ");
    }  
}

void pairWiseSwap(Node* head) 
{ 
    NODE* temp = pHead; 
  
    /* Traverse further only if  
    there are at-least two nodes left */
    while (temp != NULL && temp->next != NULL) { 
        /* Swap data of node with  
           its next node's data */
        swap(temp->data, 
             temp->next->data); 
  
        /* Move temp by 2 for the next pair */
        temp = temp->next->next; 
    } 
}

/* Function to add a node at the  
   beginning of Linked List */


int main()
{
    LIST l;
    Create(l);
    
    int n;
    printf(" \n input how many node n = ");
    scanf("%d", &n);
    for ( int i = 1; i<=n; i++)
    {
        int x;
        printf("\ninput integer");
        scanf("%d", &x);
        NODE *p = creatNode(x);
        AddTail(l,p)
    }
    
    output(l);
    
    voidWiseSwap(l);
    output(l);
    
}    




