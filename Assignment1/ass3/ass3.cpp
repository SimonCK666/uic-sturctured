// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.10
// Task no: Week3#_Assignment1_3
/* Requirements:
Write a program to input a positive integer which has exactly two digits (assume users always input
correctly) and output an inverted number. For example, if the input is 24, the output is 42; if input is 20,
output is 2.
*/

#include <stdio.h>
int main()
{
    /* code */
    int num, figure, temp = 0;
    int inputRight = 1;
	printf("Please input a positive integer:");
	scanf("%d", &num);
    
    /* assume users always input correctly */
    while (inputRight = 1)
    {
        /* Judge whether users input currectly */
        if ( num >= 0) {
            printf("Successfully!\nContinue!\n");
            break;
        } 
        else
        {
            /* if num < 0, always input until num is currect */
            printf("Sorry! Your input is not currect!\nPlease input again:");
			scanf("%d", &num);
        }
        
    }

    /* Reversed Number */
    while (num != 0)
    {
        /* Find the bit of the number */
        figure = num % 10;
        /* Reversed number */
        temp = temp * 10 + figure;
        num /= 10;
    }
	printf("-------\n");
    printf("Reverse Number is %d\n",temp);
    
    
    return 0;
}

