// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.04.18
// Task no: Week9#_Assignment_3_task_2
/* Requirements:
Write a program, read a string (use %s, assume the string has no space) and a character. Remove
the character from the string and print out the resulting string. For example, if the string is abcd
and the character is c, then the resulting string is abd; if the string is abcd and the character is f,
then the resulting string is still abcd.
*/

#include <stdio.h>
#include <string.h>
#define SIZE 100
int main(){
    char s[SIZE], c;
    int j, k;
    printf("Please enter a string without spaces: ");
	// Get the string
    gets_s(s);
    // scanf("%s", s);
    printf("Please enter a character: ");
    
	// input a character
    scanf("%c", &c);

    // Delete the character
    for(j=k=0; s[j]!='\0'; j++) {
        if(s[j]!=c) {
            s[k++]=s[j];
        }
    }
        
    s[k]= '\0';
    printf("\nThe chanaged string is: %s\n",s);

    return 0;
}