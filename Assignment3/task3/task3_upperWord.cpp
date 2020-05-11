// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.04.18
// Task no: Week9#_Assignment_3_task_3
/* Requirements:
Read a line of sentence of English words and then change the first letter of each word to upper
case. Output the changed sentence. Assume that the number of characters in the sentence is less
than 100. The program should include a function which perform the case change for a sentence
*/

#include <stdio.h>
#include <string.h>
#define SIZE 100
// Define function
void upperWord(char str[]);
int main () {
   char str[SIZE];
   printf("Please input a sentence with spaces: ");
   // Get the sentence
   gets(str);

//    printf("%s\n", str);   // Test

   // Call the function
    upperWord(str);
    
   return(0);
}

void upperWord(char str[]) {
    int count = 0;
    printf("The chanaged string is: ");
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        /* judge the spaces */
        if (str[i] == ' ')
        {
            /* the words number */
            count = 0;
            printf(" ");
        } else if (count == 0)
        {
            count = 1;
			// Let the first character becomes larger
            str[i] = str[i] - 32;
            printf("%c", str[i]);
        } else
        {
            /* output another characters */
            printf("%c", str[i]);
        }
        
        
    }
    printf("\n");
    
}