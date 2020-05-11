/**
* task2.c
* @author bulbasaur
* @description 
* @created 2020-04-19T09:36:47.514Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-19T10:53:48.065Z+08:00
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
    printf("The result is: %d", result);
    
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