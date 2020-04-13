// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.22
// Task no: Week_8_Task_2
/* Requirements: 
Write a program to read two strings and then concatenate these
two strings using two methods: 1) use function included in
string.h 2) not call any other function, i.e., you need to write
code to concatenate two strings. Put these two methods in one
program. Print out the concatenated strings and check if two
methods produce the same string.E.g., if you use scanf to read two strings (e.g.,
“abc”, “def”) and
save them to str1 and str2 respectively, then the concatenated
string will be saved in str1 (“abcdef”).
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 50
int main() {
    // Input two strings
    char str1[SIZE], str2[SIZE];
    printf("Please input a string: ");
    gets_s(str1);
    printf("Please input a string: ");
    gets_s(str2);


	/* some errors, including the suggestions to figure them out

	// 'initializing' : cannot convert from 'void *' to 'char *'
	char *merge = malloc(strlen(str1) + strlen(str2) + 1); 
	// 'initializing' : cannot convert from 'char' to 'char *'
	char *merge = (char)malloc(strlen(str1) + strlen(str2) + 1); 
	
	*/
    
	// Use pointer and malloc redistribution the memory
    // malloc: Allocates the required memory space and returns a pointer to it
    char *merge = (char *)malloc(strlen(str1) + strlen(str2) + 1);   // +1 for the zero-terminator
    
    // check for errors in malloc 
    if (merge == NULL)
    {
        /* code */
        exit(1);
    }

    strcpy(merge, str1);
    strcat(merge, str2);

    printf("Connectted the string is : %s\n", merge);
    
    return 0;
}