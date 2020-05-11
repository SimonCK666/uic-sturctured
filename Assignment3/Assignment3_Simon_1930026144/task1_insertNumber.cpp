// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.04.18
// Task no: Week9#_Assignment_3_task_1
/* Requirements:
There is an array with sorted values {3, 10, 15, 30, 55, 77}. Please write a program to read an
integer from keyboard, insert this value into proper place of the array so that the new array is still
sorted. Output the updated sorted array values.
*/

#include <stdio.h>
#include <string.h>

#define SIZE 10

void sortNumber(int str[]);
int main() {
    int str[SIZE] = {3, 10, 15, 30, 55, 77};
    int insertNumber, length = 5;
    printf("Please input the instert integer: ");
    scanf_s("%d", &insertNumber);

    // Sort the orgainal list
    sortNumber(str); 

	// Insert an integer and keep the acending sort
    for (int j = length; j > 0; j--)
    {
		/* code */
        if (insertNumber > str[j])
        {
            /* code */
            for (int k = length + 1; k > j; k--)
            {
                /* moves the number of the array one index forward */
                str[k + 1] = str[k];
            }
            str[j + 1] = insertNumber;
            length += 1;
            break;
        }
        
    }
    
    
    printf("After inserting a number, the list is : ");
    for (int i = 0; i < 7; i++)
    {
        /* code */
        printf("%4d\t", str[i]);
    }
    printf("\n");

    return 0;
}

void sortNumber(int str[]) {
    int temp = 0;
    
	// Sort the number
    for (int i = 0; i < 6; i++)
    {
        /* code */
        for (int k = i + 1; k < 6; k++)
        {
            /* code */
            if (str[i] > str[k])
            {
                /* exchange the  location*/
                temp = str[i];
                str[i] = str[k];
                str[k] = temp;
            }
            
        }
        
    }
    
    printf("Before inserting a number, the list is: ");
    for (int i = 0; i < 6; i++)
    {
        /* code */
        printf("%4d\t", str[i]);
    }
    
    printf("\n");
    
}