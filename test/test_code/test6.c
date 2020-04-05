/**
* test6.c
* @author bulbasaur
* @description 
* @created 2020-03-29T19:33:07.150Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-29T19:42:55.090Z+08:00
*/

#include <stdio.h>
int compareASCIICode(char a, char b);
int main() {
    char a, b;
    printf("Please input two characters with space:\n");
    scanf("%c %c", &a, &b);

    compareASCIICode(a, b);

    return 0;
}

int compareASCIICode(char a, char b) {
    if (a == b)
    {
        /* code */
        printf("%c is the same as %c.\n", a, b);
        return 0;
    } else if (a < b)
    {
        /* code */
        printf("%c is smaller than %c.\n", a, b);
        return -1;
    } else
    {
        /* code */
        printf("%c is larger than %c.\n", a, b);
        return 1;
    }
    
}