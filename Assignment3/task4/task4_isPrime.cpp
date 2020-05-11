// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.04.18
// Task no: Week9#_Assignment_3_task_4
/* Requirements:
Write a program to find and print out all the prime numbers between 5 and 100 (inclusive). It is
required that the program should include two functions: a main function and a sub-function int
isPrime(int n). If n is a prime number, the function isPrime will return 1 otherwise return 0. It is
required that two functions are put in two cpp files (one for main function, one for isPrime).
Create one hpp file to put the prototype of sub-function.
*/

#include <stdio.h>
#include "isPrime.h"
#include <math.h>

int main() {
    int n;
	for (n = 2; n <= 100; n++)
	{
        int test;
		// Call the function
		test = isPrime(n);
		if (test == 1)
		{
			// Out put the characters
			printf("%d ", n);
		}
	}
	printf("\n");
	return 0;
}