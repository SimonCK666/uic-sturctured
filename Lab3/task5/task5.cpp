// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.02
// Task no: Week3#_Task_5
/* Requirements:
Write a program to read two integers, compare them and
output the bigger one.
– No if statement is used in the program.
– Refer to pages 17 18 in Lecture 4 slides.
*/
#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d %d", &a,&b);

	c = (a > b) ? a : b;

	printf("%d\n",c);

	return 0;
}