#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *f;

struct LinkedList{
    int data;
    int index;
    struct LinkedList *next;
 };

typedef struct LinkedList *node;

node CreateNode(int value,int index){
    node temp;
    temp = (node)malloc(sizeof(struct LinkedList));
    temp->next = NULL;
    temp->data = value;
    temp->index = index;
    return temp;
}
