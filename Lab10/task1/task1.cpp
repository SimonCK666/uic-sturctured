// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.04.19
// Task no: Week_10_Task_1
/* Requirements: 
Write a program that includes two functions: main function
and Fac(int n). Function main reads a positive integer n,
and calls the function Fac to compute the factorial number of
n. Do not refer to the function in the lecture note.
*/

#include <stdio.h>
 
int factorial(int n);
 
int main()
{
	int n, result;
	
    // Input the integer
	printf("please input a positive integer:");
	scanf("%d",&n);
	
    result = factorial(n);
    
	printf("The result = %d\n", result);
	
	return 0;

}

int factorial(int n)
{
	if(n == 1)  // Close the recursive judgment condition
	{
		return 1;
	}
    
	return n*factorial(n - 1); // Recursively call itself
}