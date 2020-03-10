/**
* judgeNumberLetter.c
* @author bulbasaur
* @description Write a program to read one character and decide if it is a digit, an English letter or others. Give the
corresponding display message to make the output user-friendly.
* @created 2020-03-10T15:54:09.416Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-10T15:58:40.998Z+08:00
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /* code */
    char c = getchar();
    
    if ( c >= 'a' && c <= 'z' )
    {
        /* code */
        printf("letters");
    } else if ( c >= '0' && c <= '9')
    {
        /* code */
        printf("Numbers");
    }else
    {
        /* code */
        printf("Others");
    }
    
      
    
    return 0;
}
