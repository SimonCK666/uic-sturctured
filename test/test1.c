// Programmer:Simon
// Student ID: 1930026144
// Date:2020.03.16
// Task no: Week5_Task_5
/* Requirements: 
Write a program using nested for statement to print out the
following pattern
*******
******~
*****~~
****~~~
***~~~~
**~~~~~
*~~~~~~

*/


#include<stdio.h>
int main()
{
    int i,j,k;
    for (i = 1; i <= 7; i++)
    {
        for(j = 7; j >= i; j--)
        {
            printf("*");
        }
		for (k = 2; k <= i; k++) {
			printf("~");
		}
		printf("\n");
    }
	return 0;
}