// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.04.27
// Task no: Week11_Task_3
/* Requirements:
Modify the following program so that values of a and b can be
exchanged.
*/


#include <stdio.h>
void exchange(int *x, int *y);
int main() {
    int *a, *b;
    int x = 10, y = 20;

	// Get the addresses about a and b
    a = &x;
    b = &y;
    printf("before exchange: a = %d, b = %d\n", *a, *b);
    
    // Call the function
    exchange(a, b);
    
	// Print out the values of a, b
    printf("after exchange: a = %d, b = %d\n", *a, *b);
   
    return 0;
}

void exchange(int *x, int *y) {
	// exchange the addresses about the x and y
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}