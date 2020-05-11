/**
* node.h
* @author bulbasaur
* @description 
* @created 2020-04-29T09:53:32.961Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-29T10:05:04.516Z+08:00
*/


#define _NODE_H_

typedef struct _node
{
    /* data */
    int value;
    struct _node *next;
} Node;



