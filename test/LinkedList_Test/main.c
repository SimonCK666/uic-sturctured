/**
* add.c
* @author bulbasaur
* @description 
* @created 2020-05-16T09:29:52.869Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-16T10:53:16.174Z+08:00
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

void add(List *pList, int number);
void print(List *pList);
void search(List *pList, int number);
void delete(List *pList, int number);
void clear(List *pList);

int main(int argc, char const *argv[])
{
    List list;
    int number;
    list.head = NULL;
    printf("Input: ");
    do
    {
        scanf("%d", &number);
        if (number != -1)
        {
            /* add an item */
            add(&list, number);
        }
        
    } while (number != -1);
    
    print(&list);

    search(&list, number);
    
    delete(&list, number);
    printf("Deleted List: ");  // Test
    print(&list);  // Test
    

    clear(&list);
    

    return 0;
}


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


void print(List *pList) {
    Node *p;
    for ( p = pList->head; p; p = p->next)
    {
        printf("%d\t", p->value);
    }
    printf("\n");
}


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

void clear(List *pList) {
    Node *p, *q;
    for ( p = pList->head; p; p = q)
    {
        q = p->next;
        free(p);
    }
}