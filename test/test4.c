// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.22
// Task no: Week_6_Task_3
/* Requirements: 
Write a program to read a sequence of positive integers and sort
them in ascending order and then in descending order. You can
use ‐1 to indicate the end of input sequence.
For example, if the input is 12 20 2 5 -1
then the output is
	ascending order: 2 5 12 20
	descending order: 20 12 5 2
*/


#include <stdio.h>

#define SIZE 100

void sort_numbers_ascending(int number[], int count);
void sort_numbers_descending(int number[], int count);
int main() {
	int number[SIZE], i, count;
	printf("How many numbers you want to enter:");
    scanf("%d", &count);
    printf("\nEnter the numbers one by one:");

	for (i = 0; i < count; ++i) {
		scanf("%d", &number[i]);
	}

	sort_numbers_ascending(number, count);
	sort_numbers_descending(number, count);
}

void sort_numbers_ascending(int number[], int count) {
	int temp, i, j, k;
	for (j = 0; j < count; ++j) {
		for (k = j + 1; k < count; ++k) {
			if (number[j] > number[k]) {
				temp = number[j];
				number[j] = number[k];
				number[k] = temp;
			}
		}
	}

	/* Numbers in ascending order: */
	printf("Numbers in ascending order:\n");
	for (i = 0; i < count; ++i) {
		printf("%d\t", number[i]);
	}
	
	printf("\n");
}

void sort_numbers_descending(int number[], int count) {
	int temp, i, j, k;
	for (j = 0; j < count; ++j) {
		for (k = j + 1; k < count; ++k) {
			if (number[j] < number[k]) {
				temp = number[j];
				number[j] = number[k];
				number[k] = temp;
			}
		}
	}

	/* Numbers in descending order: */
	printf("Numbers in descending order:\n");
	for (i = 0; i < count; ++i) {
		printf("%d\t", number[i]);
	}
	
	printf("\n");
}