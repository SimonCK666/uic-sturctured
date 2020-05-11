/**
* task3.c
* @author bulbasaur
* @description 
* @created 2020-05-04T11:34:06.315Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-04T15:37:48.793Z+08:00
*/

#include <stdio.h>

char* stringCopy(char *dest, char *src);

int main() {
    char str1[20], str2[20];
    scanf("%s", str1);
    
    // Call the function
    stringCopy(str2, str1);
    // print the copied string
    printf("%s\n", str2);
    
    return 0;
}

char* stringCopy(char *dest, char *src) {
    while ( *src )
    {
        /* Pointer ends the loop when it encounters a null pointer */
        *dest++ = *src++;
    }
    
    *dest = '\0';   // The last bit of the string to which the to pointer points is assigned an ending of \0

}

