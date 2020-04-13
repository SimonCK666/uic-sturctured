/**
* test9.c
* @author bulbasaur
* @description 
* @created 2020-04-09T10:08:02.955Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-09T11:06:06.527Z+08:00
*/

#include <stdio.h>
#include <string.h>
#define SIZE 50
int main() {
    char s[SIZE], p[] = "End";
    int i = 0;
    printf("Please input a string: ");
    do
    {
        /* code */
        scanf("%s", s);
        i++;
    } while (strcmp(s, p) != 0);

    printf("%d\n", i - 1);
    
    return 0;
}