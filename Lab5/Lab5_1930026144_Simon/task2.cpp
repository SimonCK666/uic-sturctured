// Programmer:Simon
// Student ID: 1930026144
// Date:2020.03.16
// Task no: Week5_Task_2
/* Requirements: 
Write a program using nested for statement to print out the
following pattern
*******
******
*****
****
***
**
*

*/


#include<stdio.h>
int main()
{
    int i, j;
	/* The initial line's '*' */
    for (i = 7; i > 0; i--)
    {
		/* Every line '*' reduce 1 */
        for(j = 0; j < i; j++)
        {
            printf("*");
        }
		/* Every line break */
		printf("\n");
    }

	return 0;
}