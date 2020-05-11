/**
* task3
* @author bulbasaur
* @description 
* @created 2020-05-03T17:17:07.401Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-03T17:46:54.490Z+08:00
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 50
// Define the func
int strchar(char *str, char ch);

int main() {
    // Input the string and the letter
    char str[SIZE];
    printf("Please input a string: ");
    gets(str);
    char ch;
    printf("Please input a letter: ");
    scanf("%c", &ch);
    
    // Call the function
    int count = strchar(str, ch);
    // print the result
    printf("The number of %c is: %d\t", ch, count);
    
    // Test
    // puts(str);
    // printf("%c\n", ch);
    
    return 0;
}

int strchar(char *str, char ch) {
    int cnt = 0;
    for (int i = 0; str[i] ; i++)
    {
        /* whether str[i] = ch */
        if (str[i] == ch)
        {
            /* when str[i] is ch, cnt + 1 */
            cnt++;
        }
        
    }
    
    return cnt;
}

