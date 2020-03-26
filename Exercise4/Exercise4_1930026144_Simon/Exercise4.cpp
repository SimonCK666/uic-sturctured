// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.22
// Task no: Week_6_Exercise_4
/* Requirements: 
Compile this program and submit your CPP and
answer using two numbers 16 and -20
*/


#include <stdio.h>

// Function declaration
int absolute(int);

int main() {
	int value, answer;
	//Input the value
	printf("Input an integer (positive or negative) : ");
	scanf("%d", &value);

	//Function call
	answer = absolute(value);

	printf("The absolute value is %d.\n", answer);
	return 0;
}


// Function definition
int absolute(int x) {
	if (x > 0) {
		return x;
	} else {
		return -x;
	}
}

/*
The answer:
#1
Input an integer (positive or negative) : 16
The absolute value is 16.
#2
Input an integer (positive or negative) : -20
The absolute value is 20.
*/