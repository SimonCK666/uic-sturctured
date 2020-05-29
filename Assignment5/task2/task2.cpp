/**
* task2.c
* @author Simon
* @description 
Write a program which includes two functions. The main function reads the sequence of integers
(assume ends with -1, -1 is not included) and then calsl the sub-function, passes the inputted integers
to sub-function through parameters, and prints the biggest and lowest values returned from
sub-function (through return statement and/or pointer parameter). No global variable is allowed. The
sub-function should not change the sequence of inputted integers.

* @created 2020-05-16T11:01:35.774Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-22T21:01:07.467Z+08:00
*/

#include <stdio.h>
// Define the function
void maxMin(int *np, int i, int *minValue, int *maxValue);
int main(int argc, char const *argv[])
{
    int num[20];
    int n, i = 0, max, min;
    int *np = num;
    printf("Please input the Numbers (End with -1): \n");
    scanf("%d", &n);
    while (n != -1)
    {
        /* input the number one by one and end with -1 */
        num[i++] = n;
        scanf("%d", &n);
    }

    // Test : Output the value of pointer
    // for (int j = 0; j < i; j++)
    // {
    //     /* code */
    //     printf("%d\t", *(np+j));
    // }
    
    printf("\n");
    
    // Call the function
    maxMin(np, i, &min, &max);
    // Print the max value and min value
    printf("Max: %d\t Min: %d\n", max, min);
    
    return 0;
}

void maxMin(int num[20], int i, int *minValue, int *maxValue) {
    // Initialize the max and min values
    *minValue = num[0];
    *maxValue = num[0];
    for (int j = 0; j < i; j++)
    {
        /* judge the max value */
        if (*maxValue < num[j])
        {
            /* change the max value */
            *maxValue = num[j];
        }
        /* judge the min value */
        if (*minValue > num[j])
        {
            /* change the min value */
            *minValue = num[j];
        }
        
    }
    
}