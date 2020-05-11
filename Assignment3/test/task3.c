/**
* task3.c
* @author bulbasaur
* @description 
* @created 2020-04-17T19:17:56.954Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-18T09:43:29.727Z+08:00
*/

#include <stdio.h>
#include <string.h>
#define SIZE 100
void upperWord(char str[]);
int main () {
   char str[SIZE];
   printf("Please input a sentence with spaces: ");
   gets(str);

//    printf("%s\n", str);

    upperWord(str);
    
   return(0);
}

void upperWord(char str[]) {
    int count = 0;
    printf("The chanaged string is: ");
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        /* code */
        if (str[i] == ' ')
        {
            /* code */
            count = 0;
            printf(" ");
        } else if (count == 0)
        {
            count = 1;
            str[i] = str[i] - 32;
            printf("%c", str[i]);
        } else
        {
            /* code */
            printf("%c", str[i]);
        }
        
        
    }
    printf("\n");
    
}