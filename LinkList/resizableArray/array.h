/**
* createLinkList.c
* @author bulbasaur
* @description 
* @created 2020-04-29T08:04:43.146Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-29T09:16:07.135Z+08:00
*/

#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct 
{
    /* data */
    int *array;
    int size;
}Array;

Array array_creat(int init_size);
void array_free(Array *a);
int array_size(const Array *a);
int *array_at(Array *a, int index);
void array_inflate(Array *a, int more_size); 


#endif // !_ARRAY_H_