/**
* exercise4.c
* @author bulbasaur
* @description 
* @created 2020-05-10T22:48:09.960Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-10T22:50:46.543Z+08:00
*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    if (ptr != NULL)
    {
        /* code */
        *ptr = 23;
    }
    printf("Value: %d", *ptr);

    free(ptr);
    
    return 0;
}
