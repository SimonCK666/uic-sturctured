// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.22
// Task no: Week_6_Exercise_5
/* Requirements: 
• Based on the previous example, write a C program to input a
number and calculate the:
1) Square Root (using sqrt()) and
2) Log base 10 (using log10())
3) Natural log (using log())
• Using number 10 to test for it
*/

#include <stdio.h>
// Import the math library
#include <math.h>

int main() {
    float x;
    float sqr = 0, lo10 = 0, lo = 0;
    //Input the number x
    printf("Please input any number x: ");
    scanf("%f", &x);

    //Use the sqrt() function
    sqr = sqrt(x);
    printf("The Square Boot of %lf = %f\n", x, sqr);

    //Use the log10() function
    lo10 = log10(x);
    printf("The Log10 of of %lf = %f\n", x, lo10);

    //Use the log10() function
    lo = log(x);
    printf("The natural log of %lf = %f\n", x, lo);

    return 0;
}