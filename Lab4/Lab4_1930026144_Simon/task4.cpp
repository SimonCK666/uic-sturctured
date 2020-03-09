// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.08
// Task no: Week4#_Task_4
/* Requirements: 
Write a program for the following control flow diagram.
*/

#include <stdio.h>
int main() {
	int hei, wei;
	scanf("%d %d", &hei,&wei);

	// Judge some conditions
	if ( (hei - 105) > (wei + 20) ) {
		printf("You are too slim\n");
	} else if ( (wei - 10) < (hei - 105) ) {
		printf("You are fit\n");
	} else {
		printf("You are too fat\n");
	}

	return 0;
}