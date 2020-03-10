// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.10
// Task no: Week3#_Assignment1_4
/* Requirements:
Write a program to read one character and decide if it is a digit, an English letter or others. Give the
corresponding display message to make the output user-friendly.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /* code */
	printf("Please input one character:");
    char c = getchar();
	    
    if ( c >= 'a' && c <= 'z' )
    {
        /* Judge whether the input is Letters */
        printf("Letters\n");
    } else if ( c >= '0' && c <= '9')
    {
        /* Judge whether the input is Numbers */
        printf("Numbers\n");
    }else
    {
        /* Judge whether the input is Others */
        printf("Others\n");
    }

    return 0;
}