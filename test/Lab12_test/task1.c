/**
* task1.c
* @author bulbasaur
* @description 
* @created 2020-05-04T10:54:40.561Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-04T17:35:30.322Z+08:00
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