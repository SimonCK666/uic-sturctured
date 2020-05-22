/**
* delete.c
* @author bulbasaur
* @description 
* @created 2020-05-16T10:41:17.613Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-16T10:41:38.117Z+08:00
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

void delete(List *pList, int number) {
    printf("Delete Input: ");
    scanf("%d", &number);
    Node *p, *q;
    for ( q = NULL, p = pList->head; p; q = p, p = p->next)
    {
        /* tips: Any pointer at the left of -> must be checked whether equals 0 */
        if (p->value == number)
        {
            if ( q )
            {
                q->next = p->next;
            }else
            {
                pList->head = p->next;
            }
            free(p);
            break;
        }
    }
}