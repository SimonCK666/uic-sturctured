/**
* inputRight.c
* @author bulbasaur
* @description Write a program to input a positive integer which has exactly two digits (assume users always input
correctly) and output an inverted number. For example, if the input is 24, the output is 42; if input is 20,
output is 2.
* @created 2020-03-10T14:31:31.456Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-10T15:43:49.735Z+08:00
*/

#include <stdio.h>
#include <stdbool.h>
int main()
{
    /* code */
    int num, figure, temp = 0;
    bool inputRight;
	printf("Please input a positive integer:");
	scanf("%d", &num);
    
    /* assume users always input correctly */
    while (inputRight = true)
    {
        /* Judge whether users input currectly */
        if ( num >= 0) {
            printf("Successfully! Please continue!\n");
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

        /* IF input 230, output 032 */
        //printf("%d", figure);
    }
    printf("%d",temp);
    
    
    return 0;
}
