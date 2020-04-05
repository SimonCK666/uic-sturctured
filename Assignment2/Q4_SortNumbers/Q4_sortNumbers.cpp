// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.30
// Task no: Assignment_2_Q2_Prime
/* Requirements: 
Write a program to read a sequence of integers followed by -1. -1
is used to indicate the end of input. Store the positive numbers 
in an array and then sort the array in ascending order and print 
the sorted positive numbers. If during the input, a negative number (except -1) or 0 
is inputted, it should be discarded. All the numbers inputted after 1 are not accepted too. 
For example, if input sequence is 12 14 15 5 1 4 -1 10 20 20, then only 12, 14, 15, 1 1, and 4 are stored in the array. After sorting, 
the data stored in array should be 1 4 12 14 15 15. This is the sequence to be printed out in the end.

*/

#include <stdio.h>
#include <string.h>
// The custom macros
#define SIZE 50

//Definite the function to sor numbers
void sort_numbers_ascending(int number[], int count);


int main() {
	int str[SIZE];
    int num, count, i = 0, j;
    printf("How many intergers do you want to input: ");
    scanf("%d", &count);
    printf("Please input some integers with spaces (End with -1): ");
    scanf("%d", &num);
    
	/* When input -1 then end the input */
    while (num != -1)
    {
        /* Put the num into the array str[] */
        str[i++] = num;
        scanf("%d", &num);
    }

    // Call the function
    sort_numbers_ascending(str, count);
    
    printf("Numbers in ascending order:");
    for (j = 0; j < i; j++)
    {
        /* Delete the negetive numbers */
        if (str[j] > 0)
        {
            /* Output the string */
            printf("%d\t", str[j]);

        }
        
    }
    
    return 0;

}

// Function to sort numbers in ascending
void sort_numbers_ascending(int number[], int count) {
	int temp, i, j, k;
	for (j = 0; j < count; ++j) {
		for (k = j + 1; k < count; ++k) {
			// Sort numbers in ascending
			if (number[j] > number[k]) {
				temp = number[j];
				number[j] = number[k];
				number[k] = temp;
			}
		}
	}

	
}