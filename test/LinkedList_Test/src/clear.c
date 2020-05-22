/**
* clear.c
* @author bulbasaur
* @description 
* @created 2020-05-16T10:53:55.460Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-16T10:54:23.291Z+08:00
*/

#include "node.h"
#include <stdio.h>
#include <stdlib.h>

// typedef struct _node
// {
//     /* data */
//     int value;
//     struct _node * next;
// } Node;

typedef struct _list
{
    /* data */
    Node* head;
} List;


void clear(List *pList) {
    Node *p, *q;
    for ( p = pList->head; p; p = q)
    {
        q = p->next;
        free(p);
    }
}