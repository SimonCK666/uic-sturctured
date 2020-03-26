// Programmer:Simon
// Student ID: 1930026144
// Date:2020.03.16
// Task no: Week5_Task_1
/* Requirements: 
Write a program to calculate and output the sum of the even
numbers from 1 to 100 (inclusive) and the sum of odd numbers
from 1 to 100 (inclusive). 
*/

#include <stdio.h>
int main() {
	int i, even, odd, sumE = 0, sumO = 0;

	for (i = 0; i <= 100; i++) {
		/* Judge the even numbers */
		if (i % 2 == 0) {
			even = i;
			/* Sum the even numbers */
			sumE += even;
		} else {                /* Judge the odd numbers */
			odd = i;
			/* Sum the odd numbers */
			sumO += odd;
		}
	}

	printf("The sum of even numbers from 1 to 100 is %d\n", sumE);
	printf("The sum of odd numbers from 1 to 100 is %d\n", sumO);

	return 0;
}