#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *pnext; // pointer next
};

typedef struct node NODE; // struct note = NODE

struct list
{
    NODE *pHead;
    NODE *pTail;
};

typedef struct list LIST; // struct list = LIST

void Create(LIST &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

NODE *createNode(int x)
{
    NODE *p = new NODE;
    if ( p == NULL )
    {
        printf("\n Have error");
        return NULL;
    }
    p->data = x;
    p->pnext = NULL; // first don't have connection
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
        p->pnext = l.pHead;
        l.pHead = p;
    }
}

void AddTail(LIST &l, NODE *p)
{
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = p;
    }
    else
    {
        l.pTail->pnext = p;
        l.pTail = p;
    }
}

void output(LIST l)
{
    for (NODE *k = l.pHead; k!= NULL; k = k->pnext)
    {
        printf(k->data);
        printf("    ");
    }  
}

void swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c; 
}


void pairWiseSwap(NODE* pHead) 
{ 
    NODE* temp = pHead; 
  
    /* Traverse further only if  
    there are at-least two nodes left */
    while (temp != NULL && temp->pnext != NULL) { 
        /* Swap data of node with  
           its next node's data */
        swap(temp->data, temp->pnext->data); 
  
        /* Move temp by 2 for the next pair */
        temp = temp->pnext->pnext; 
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
        NODE *p = createNode(x);
        AddTail(l,p);
    }

    output(l);
    
    NODE* temp = pHead;  
    /* Traverse further only if  
    there are at-least two nodes left */
    while (temp != NULL && temp->pnext != NULL) { 
        /* Swap data of node with  
           its next node's data */
        swap(temp->data, 
             temp->pnext->data); 
  
        /* Move temp by 2 for the next pair */
        temp = temp->pnext->pnext; 
    } 

    output(l);
    
}    



