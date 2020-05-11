/**
* test 12.c
* @author bulbasaur
* @description 
* @created 2020-04-27T09:56:45.308Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-27T10:13:47.702Z+08:00
*/

#include <stdio.h>
void exchange(int *x, int *y);
int main() {
    int *a, *b;
    int x = 10, y = 20;
    a = &x;
    b = &y;
    printf("before exchange: a = %d, b = %d\n", *a, *b);
    // printf("before exchange: a = %d, b = %d\n", x, y);
    
    exchange(a, b);
    // int temp = 0;
    // temp = x;
    // x = y;
    // y = temp;
    printf("after exchange: a = %d, b = %d\n", *a, *b);
    // printf("after exchange: a = %d, b = %d\n", x, y);
    return 0;
}

void exchange(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}