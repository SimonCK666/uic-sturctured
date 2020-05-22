// Programmer: Lily LIN
// Date: 2020.5.11
// Task no: Assignment4_Task2
// Requirements: There is a sequence of numbers a1, a2, a3, …, an. where an = 2an-1+1, a1 = 2. 
// Write a program to find a16.  Use recursive function. 

#include <stdio.h>

int find(int);

int main(){
	printf("a16 = %d\n", find(16));	// print the result
	getchar();
	return 0;
}

int find(int n){
	if(n == 1)return 2;	// base condition
	else
		return 2 * find(n - 1) + 1;	// recursion
}