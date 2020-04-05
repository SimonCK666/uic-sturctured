// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.29
// Task no: Week_7_Task_1
/* Requirements: Write two functions: main funtion and a sub-function
compareASCIICode.
– The compareASCIICode function will compare ASCII code
of any two characters and return 1, 0, or -1 accordingly.
• For example, compareASCIICode(‘a’, ‘b’) returns -1; if
compareASCIICode(‘b’, ‘a’) returns 1; compareASCIICode(‘a’, ‘a’)
returns 0.
– The main function will read two characters from keyboard
and call the compareASCIICode function to compare the
inputted two characters. The main function will also print
out comparison results according to the return value from
the compareASCIICode function.
• For example, if input is a b, then the output could be the
character ‘a’ is smaller than character ‘b’.
*/


#include <stdio.h>
/* implicit declaration of 'compareASCIICode' */
int compareASCIICode(char a, char b);
int main() {
    char a, b;
	int x;
	/* Input two characters */
    printf("Please input two characters with space:");
    scanf("%c %c", &a, &b);

	/* Call the function */
    x = compareASCIICode(a, b);

	if (x == 0) {
		printf("%c is the same as %c.\n", a, b);
	} else if (x == 1) {
		printf("%c is larger than %c.\n", a, b);
	} else if (x == -1) {
		printf("%c is smaller than %c.\n", a, b);
	}

    return 0;
}

/* Definite the function */
int compareASCIICode(char a, char b) {
    if (a == b)
    {
        /* judge whether a is the same as b */
        
        return 0;
    } else if (a < b)
    {
        /* judge whether a is smaller than b */
        
        return -1;
    } else
    {
        /* judge whether a is larger than b */
        
        return 1;
    }
    
}