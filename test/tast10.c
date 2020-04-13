/**
* tast10.c
* @author bulbasaur
* @description 
* @created 2020-04-09T10:42:40.934Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-09T11:23:10.718Z+08:00
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 50
int main() {
    // Input two strings
    char str1[SIZE], str2[SIZE];
    printf("Please input a string: ");
    gets(str1);
    printf("Please input a string: ");
    gets(str2);

    // Use pointer and malloc redistribution the memory
    // malloc: Allocates the required memory space and returns a pointer to it
    char *merge = malloc(strlen(str1) + strlen(str2) + 1);   // +1 for the zero-terminator
    
    // check for errors in malloc 
    if (merge == NULL)
    {
        /* code */
        exit(1);
    }

    strcpy(merge, str1);
    strcat(merge, str2);

    printf("Connectted the string is : %s", merge);
    
    return 0;
}