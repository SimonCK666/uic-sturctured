// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.04.19
// Task no: Week_10_Task_2
/* Requirements: 
Write a program that includes two functions: main function
and Power(int m, int n). Function main reads two
positive integer, and call the function Power to compute mn
and print out the result. Power(int m, int n)must be a
recursive function.
*/


#include <stdio.h>
// Define the function
int Power(int m, int n);

int main() {
    int m, n, result;
    printf("Please input two integers to calculate m^n\n ");
    printf("m: ");
    scanf("%d", &m);
    printf(" n: ");
    scanf("%d", &n);

    // printf("m: %d\t n: %d\n", m, n);  // Test

    // Call the function
    result = Power(m, n);
    // Output the result
    printf("The result is: %d\n", result);
    
    return 0;
}

int Power(int m, int n) {
    if (n == 0)
    {
        return 1;   // Close the recursive judgment condition
    } else
    {
        /* Recursively call itself */
        return Power(m, n - 1) * m;
    }
    
}