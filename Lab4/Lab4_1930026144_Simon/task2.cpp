// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.08
// Task no: Week4#_Task_2
/* Requirements: 
Write a program according to the following control flow diagram
and output the final value of n
*/

#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);

	// use if statments to eliminate negative
	if (n < 0) {
		n = -n;
	}
	n = n + n;

	printf("%d\n", n);
	return 0;
}