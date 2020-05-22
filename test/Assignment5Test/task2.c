/**
* task2.c
* @author bulbasaur
* @description 
* @created 2020-05-15T18:12:44.384Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-15T18:50:41.601Z+08:00
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