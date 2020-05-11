/**
* task3.c
* @author bulbasaur
* @description 
* @created 2020-04-19T09:36:53.845Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-19T11:31:55.452Z+08:00
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
    printf("The result: %d", result);
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