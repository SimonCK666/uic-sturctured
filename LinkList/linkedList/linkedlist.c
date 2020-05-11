/**
* node.h
* @author bulbasaur
* @description 
* @created 2020-04-29T09:53:32.961Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-29T11:04:51.659Z+08:00
*/

#include "node.h"
#include <stdio.h>
#include <stdlib.h>

// typedef struct _node
// {
//     /* data */
//     int value;
//     struct _node *next;
// } Node;

typedef struct _list
{
    Node* head;
    // Node* tail;
} List;

void add(List* pList, int number);
void print(List *pList);
void search(List *pList, int number);
void delete(List *pList, int number);
void free(List *pList);

int main(int argc, char const *argv[])
{
    List list;
    int number;
    // list.head = list.tail = NULL;
    list.head = NULL;
    do
    {
        scanf("%d", &number);
        if (number != -1)
        {
            // add to linked-list
            add(&list, number);
        }
        
    } while (number != -1);

    // Go through the array
    print(&list);
    
    // search the index and found it
    search(&list, number);
    
    // search the index and delete it
    delete(&list, number);

    // free linked-list
    free(&list);

    return 0;
}

void add(List* pList, int number) {
    // add to linked-list
    Node *p = (Node*)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    // find the last
    Node *last = pList->head;
    // judge last equal NULL
    if ( last )
    {
        while (last->next)
        {
            last = last->next;
        }
        // attach
        last->next = p;
    } else
    {
        pList->head = p;
    }
}

void print(List *pList) {
    // Go through the array
    Node *p;
    for ( p = pList->head; p; p = p->next )    //classic
    {
        printf("%d\t", p->next);
    }
    printf("\n");
}


void search(List *pList, int number) {
    // search the index and found it
    Node *p;
    int isFound = 0;
    for ( p = pList->head; p; p = p->next)
    {
        if (p->value == number)
        {
            printf("Find it\n");
            isFound = 1;
            break;
        }
    }
    if ( !isFound )
    {
        printf("Not find\n");
    }
}

void delete(List *pList, int number) {
    // search the index and delete it
    Node *p, *q;
    for ( q = NULL, p = pList->head; p; q = p, p = p->next)
    {
        if (p->value == number)
        {
            // boundary
            if ( q )
            {
                q->next = p->next;
            } else
            {
                pList->head = p->next;
            }
            free(p);
            break;
        }
    }
}

void free(List *pList) {
    // free linked-list
    Node *p, *q;
    for ( p = pList->head; p; p = q)
    {
        q = p->next;
        free(p);
    }
}