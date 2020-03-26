/**
* example4.c
* @author bulbasaur
* @description 
* @created 2020-03-15T22:29:24.864Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-16T20:16:33.252Z+08:00
*/

#include <stdio.h>
int main() {
    char word[20];
    
    word[0] = 'H';
    word[1] = 'e';
    word[2] = 'l';
    word[3] = 'l';
    word[4] = 'o';
    word[9] = '\0';

    printf("The world is %s\n", word);
    
    return 0;
}