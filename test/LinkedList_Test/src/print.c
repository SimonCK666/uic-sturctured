/**
* add.c
* @author bulbasaur
* @description 
* @created 2020-05-16T09:29:52.869Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-16T10:44:42.446Z+08:00
*/

#include "inc/node.h"
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


void print(List *pList) {
    Node *p;
    // Classical: p = p->next
    for ( p = pList->head; p; p = p->next)
    {
        printf("%d\t", p->value);
    }
    printf("\n");
}