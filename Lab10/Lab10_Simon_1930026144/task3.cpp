// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.04.19
// Task no: Week_10_Task_3
/* Requirements: 
Using a program to sum up all the natural numbers (positive
integers) from 1 up to the input positive number and print out
the result. For example, if the input positive number is 4, then
the program will output the sum of 1, 2, 3, and 4
*/


#include <stdio.h>
// Define the func
int sumInteger(int end);

int main() {
    int result, end;
    // input the integer
    printf("Please input an integer: ");
    scanf("%d", &end);
    
    // call the function
    result = sumInteger(end);
    // output
    printf("The result: %d\n", result);
    return 0;
}

int sumInteger(int end) {
    int i;
    if (end == 0)
    {
        return 0;      // Close the recursive judgment condition
    } else
    {
        /* Recursively call itself */
        return end + sumInteger(end - 1);
    }
    
}