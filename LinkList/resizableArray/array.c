/**
* createLinkList.c
* @author bulbasaur
* @description 
* @created 2020-04-29T08:04:43.146Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-29T10:12:10.664Z+08:00
*/

#include "array.h"
#include <stdio.h>
#include <stdlib.h>

const BLOCK_SIZE = 20;
// typedef struct 
// {
//     /* data */
//     int *array;
//     int size;
// }Array;

Array array_creat(int init_size) {
    Array a;
    a.size = init_size;
    a.array = (int*)malloc(sizeof(int) * a.size);

    return a;
}

void array_free(Array *a) {
    free(a->array);
    a->array = NULL;
    a->size = 0;
}

// 封装
int array_size(const Array *a) {
    return a->size;
}

int *array_at(Array *a, int index) {
    if (index >= a->size)
    {
        array_inflate(a, (index / BLOCK_SIZE + 1) * BLOCK_SIZE - a->size);
    }
    
    return &(a->array[index]);
}

int array_get(const Array *a, int index) {
    return a->array[index];
}

void array_set(Array *a, int index, int value) {
    a->array[index] = value;
}


/* Main Code */
// make the resizable array increase
void array_inflate(Array *a, int more_size) {
    // resize the memory of the original array
    int *p = (int*)malloc(sizeof(int)*(a->size + more_size));
    // copy the original array
    for (int i = 0; i < a->size; i++)
    {

        p[i] = a->array[i];
    }
    free(a->array);
    a->array = p;
    a->size += more_size;
    
}

int main(int argc, char const *argv[])
{
    Array a = array_creat(100);
    printf("SIZE: %d\n", array_size(&a));
    // intput the value into the array
    *array_at(&a, 0) = 10;
    printf("INDEX[0] = %d\n", *array_at(&a, 0));
    
    // Dynamic array of integers that can be read indefinitely
    int number = 0;
    int cnt = 0;
    while (number != -1)
    {
        scanf("%d", &number);
        if (number != -1)
        {
            *array_at(&a, cnt++) = number;
        }
    }
    
    array_free(&a);
    
    return 0;
}

