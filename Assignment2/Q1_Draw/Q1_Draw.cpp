// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.30
// Task no: Assignment_2_Q1_Draw
/* Requirements: 
Use nested for statement to write a program to print a pattern as follows.
#*#*#*#*#*
#*#*#*#*
#*#*#*
#*#*
#*
#

*/


#include <stdio.h>
int main() {
    int i,j;
    
    for (i = 10; i > 0; i--)
    {
        /* judge the number of lines */
        if (i % 2 == 0 || i == 1)
        {
            
            for (j = 0; j < i; j++)
            {
                /* judge whether even */
                if (j % 2 == 0)
                {
                    /* the even print # */
                    printf("#");
                } else
                {
                    /* the odd print * */
                    printf("*");
                }
                

            }
			/* Next line */
            printf("\n");
        }
        
        
    }
    
    return 0;
}