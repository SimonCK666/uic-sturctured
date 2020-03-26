// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.22
// Task no: Week_6_Exercise_3
/* Requirements: 
Compile this program and submit your CPP and answer
*/


#include <stdio.h>

// Function declaration
void printASCIICode(char);

int main() {
	//Function calls
	printASCIICode('A');
	printASCIICode('B');
	printASCIICode('C');
}


// Function definition
void printASCIICode(char code) {
	printf("%c 's ASCII code is %d\n", code, code);

	return;
}


/*
The answers:
A 's ASCII code is 65
B 's ASCII code is 66
C 's ASCII code is 67
*/