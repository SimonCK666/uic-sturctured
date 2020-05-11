// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.05.04
// Task no: Week12_Task_1
/* Requirements:
Modify the following program so that values of a and b can be
exchanged.

*/

#include <stdio.h>

void exchange(int *x, int *y);

int main() {
    int a = 10, b = 20;
    printf("Before exchange: a = %d, b = %d\n", a, b);
    
    // Call the function
    exchange(&a, &b);
    printf("After exchange: a = %d, b = %d\n", a, b);
    return 0;
}

void exchange(int *x, int *y) {
	// exchange the addresses about the x and y
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}