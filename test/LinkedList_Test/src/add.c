/**
* add.c
* @author bulbasaur
* @description 
* @created 2020-05-16T09:29:52.869Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-16T10:44:57.628Z+08:00
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


void add(List *pList, int number) {
    Node *p = (Node*)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    /* find the last */
    Node *last = pList->head;
    if ( last )
    {
        while ( last->next )
        {
            last = last->next;
        }
        last->next = p;
    } else
    {
        pList->head = p;
    }
}
