// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.22
// Task no: Week_6_Task_2
/* Requirements: 
Read a string using “%s” in a scanf statement and count the
number of character ‘a’ in that string. Assume that the total
number of characters in the string will not exceed 49 and the
string has no spaces.
Requirements:
No string functions (e.g., strlen) are allowed. 
*/


#include <stdio.h>
#include <string.h>

// The custom macros
#define SIZE 49

int main() {
	char line[SIZE];
	int i = 0, count = 0;
	printf("Please input one line of characters:");
    
	// input the string
	scanf("%s", line);

	for (i; i <= 49; i++) {
		// judge the number of character 'a'
		if (line[i] == 'a') {
			count++;
		}
	}

	printf("The number of character 'a' is %d\n", count);

	return 0;
}