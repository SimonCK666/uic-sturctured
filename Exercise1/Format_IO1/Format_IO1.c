// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.02.25
// Task no: Week_2_Exercise_1
// Requirements: What is the output of the following program?

#include <stdio.h>
int main()
{
    char c, d;
    float f;
    c = 'd';
    d = 97;
    f = 23.5;
    printf("c = %c, d = %c \nf = %f, f = %e", c, d, f, f);

    return 0;
}

/* The output is 
c = d, d = a
f = 23.500000, f = 2.350000e+001
*/