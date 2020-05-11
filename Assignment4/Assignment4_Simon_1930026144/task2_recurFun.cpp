/**
* task2.c
* @author bulbasaur
* @description 
* @created 2020-05-03T11:06:00.175Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-03T17:17:01.871Z+08:00
*/

#include <stdio.h>
// Define the recursive
int fun(int n);
int main() {
    int n = 16;
    
    // Calculus the a16
    printf("a16 = %d\n", fun(16));
    
    return 0;
}

int fun(int n) {
    if (n == 1)
    {
        /* a1 = 2 */
        return 2;
    }
    
    // Recursive call itself
    return 2 * fun(n - 1) + 1;
}

