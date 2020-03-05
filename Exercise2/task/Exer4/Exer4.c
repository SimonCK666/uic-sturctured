// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.04
// Task no: Week3#_Task_1
/* Requirements: 
How to use nested loops to produce the following output?
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
* * * * * * * * *
* * * * * * * * * *
*/
#include<stdio.h>
int main()
{
    int i,j;
    printf("\n");
    for (i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}