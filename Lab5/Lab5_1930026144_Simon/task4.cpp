// Programmer:Simon
// Student ID: 1930026144
// Date:2020.03.16
// Task no: Week5_Task_4
/* Requirements: 
Write a program to add all the positive integers which satisfy all
the following conditions:
1. under 1000,
2. multiple of 5, and
3. not multiple of 7.

For example:
10 should be added, but 14, 35, 1000 should not be added.*/#include<stdio.h>
int main()
{
	int num;

	/* The number Under 100 */
	for (num = 1; num < 1000; num++) {
		/* Judge the num is multiple of 5 and not multiple of 7 */
		if ((num % 5) == 0 && (num % 7) != 0) {
			printf("%d\t", num);
		}
	}

	return 0;
}