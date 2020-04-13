// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.22
// Task no: Week_8_Task_1
/* Requirements: 
Read a line of sentence which has only English letters and
spaces. This sentence ends with the word “End”(case
sensitive). Please write a program to count the number of words
in this sentence (not include “End”). Use scanf and %s to read
a word. Assume that the length of each word in the sentence is
less that 20.

For example, if the input is
		amf def and ok kind End
then the output is 5.
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
        /* input the string with spaces */
        scanf("%s", s);
        i++;
    } while (strcmp(s, p) != 0);

	/* Output the number of string without the last word */
    printf("%d\n", i - 1);
    
    return 0;
}