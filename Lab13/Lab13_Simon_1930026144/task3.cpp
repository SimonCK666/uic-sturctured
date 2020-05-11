// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.05.11
// Task no: Week_13_Task_3
/* Requirements: 
Write a program to read a sequence of data of integer type and then
output the data in the reverse order. Array is not allowed to be used.
The total number of the data is inputted by user at the beginning of
program execution. The memory should be dynamically allocated
according to the number of data. This is no limit to the total number.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *num;
    int n;
    printf("How many numbers do you want to input?\n");
    scanf("%d", &n);
    // dynamically allocated memory to num
    num = (int*)malloc(sizeof(int)*n);
    printf("Please input the numbers: \n");
    for (int i = 0; i < n; i++)
    {
        /* input the numbers with spaces */
        scanf("%d", &*(num+i));
    }

    for (int j = n; j > 0; j--)
    {
        /* reverse output the numbers */
        printf("%d\t", *(num+(j-1)));
    }

    printf("\n");
    
	free(num);

    return 0;
}
