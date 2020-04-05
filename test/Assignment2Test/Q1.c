/**
* Q1.c
* @author bulbasaur
* @description 

Use nested for statement to write a program to print a pattern as follows.
#*#*#*#*#*
#*#*#*#*
#*#*#*
#*#*
#*
#

* @created 2020-03-30T17:56:41.299Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-30T18:44:15.655Z+08:00
*/

#include <stdio.h>
int main() {
    int i,j;
    

    
    for (i = 10; i > 0; i--)
    {
        /* code */
        if (i % 2 == 0 || i == 1)
        {
            /* code */
            for (j = 0; j < i; j++)
            {
                /* code */
                if (j % 2 == 0)
                {
                    /* code */
                    printf("#");
                } else
                {
                    /* code */
                    printf("*");
                }
                

            }
            printf("\n");
            //printf("%d\t", i);
        }
        
        
    }
    
    return 0;
}