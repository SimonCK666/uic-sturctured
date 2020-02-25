// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.02.25
// Task no: Week_2_Exercise_4
/* Requirements:
What is the output of the following program?
what does this program do?
What is the output if the input is 25 o f 60?
*/

#include <stdio.h>
int main() {
    int percentage, x;
    char ch1, ch2;
    scanf("%d %c %c %d", &percentage, &ch1, &ch2, &x);
    printf("%d%% %c%c %d is %f\n", percentage, ch1, ch2, x, 1.0 * x * percentage / 100);

    return 0;
}

/*
The output is up to what you input for the percentage,x,ch1 and ch2. And you need input something you want in the cmd.
The program is able to do the polynomial " 1.0 * x * percentage / 100 ".
When the input is 25 o f 60, the output is "25% of 60 is 15.000000".
*/