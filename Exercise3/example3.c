/**
* example3.c
* @author bulbasaur
* @description 

Multi-Dimensional Arrays

* @created 2020-03-15T22:10:57.307Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-16T20:07:13.275Z+08:00
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int random[2][2];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        /* code */
        for (j = 0; j < 2; j++)
        {
            /* code */
            random[i][j] = rand()%2;
        }
    }

    for (i = 0; i < 2; i++)
    {
        /* code */
        for (j = 0; j < 2; j++)
        {
            /* code */
            printf("%c", random[i][j] ? 'x' : 'o');
        }
        printf('\n');
    }
    
    return 0;
}