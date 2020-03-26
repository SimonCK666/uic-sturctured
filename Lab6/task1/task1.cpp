// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.22
// Task no: Week_6_Task_1
/* Requirements: 
Write a program to read one line of characters and output the
number of the character ’a’ in this line. The line ends with ENTER
key (i.e.,‘\n’). There is no limit to the number of characters in
this line.
The line is read character by character (i.e., use %c in
scanf statement to read one character and looping to
repeat reading character until the end of the line)*/#include <stdio.h>
#include <string.h>

// The custom macros
#define SIZE 1000

int main() {
	char line[SIZE],c;
	int i = 0, count = 0;
	printf("Please input one line of characters:");

	//Input the characters one by one
    while (scanf("%c", &c) != EOF && c != '\n')
    {
        line[i++] = c;
    }

	for (i; i >= 0; i--) {
		// judge the number of character 'a'
		if (line[i] == 'a') {
			count++;
		}
	}

	printf("The number of character 'a' is %d\n", count);

	return 0;
}