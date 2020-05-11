// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.05.04
// Task no: Week12_Task_3
/* Requirements:
Write a function char* stringCopy(char *dest, char *src) to
copy the string stored in src to dest. The function strcpy is NOT
allowed to use. String.h CANNOT be included. The main function is as
follows:

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

	return dest;

}