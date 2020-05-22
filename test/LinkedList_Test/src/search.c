/**
* search.c
* @author bulbasaur
* @description 
* @created 2020-05-16T10:06:25.513Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-16T10:44:36.530Z+08:00
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

void search(List *pList, int number) {
    printf("Search Input: ");
    scanf("%d", &number);
    Node *p;
    int isFound = 0;
    for ( p = pList->head; p; p = p->next)
    {
        if (p->value == number)
        {
            printf("Founded!\n");
            isFound = 1;
            break;
        }
    }
    if ( !isFound )
    {
        printf("Not Found!\n");
    }
}