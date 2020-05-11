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

int isPrime(int n) {
    int i;
	// assume the number is prime number
    int isPrime=1;
    for (i = 2; i < n; i++)
    {
		// Judge the prime numbers
        if (n % i==0)
        {
			// is not the prime number
            isPrime = 0;
            break;
        }
    }
    
    return isPrime;
}