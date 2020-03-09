// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.08
// Task no: Week4#_Task_1
/* Requirements: 
Write a program to read two integers Output two results one is
about integer divided by another uses float divided by
For the float divided by round the result to 2 decimal
places (refer to lab 2 task 3 for how to achieve this) Please make
input and output user friendly
For example, if the input is 6 4 then the output could be 
Integer 6 divided by 4 is 1
Float 6 divided by 4 is 1 50
*/
#include <stdio.h>
int main() {
	int a,b;
	float r1,r2;

	scanf("%d %d", &a, &b);
	// find the two results
	r1 = a / b;
	r2 = (float)a / (float)b;

	printf("Integer:%d divided by %d is %.0f\n", a,b,r1);
	printf("Float:%d divided by %d is %.2f\n", a,b,r2);

	return 0;
}