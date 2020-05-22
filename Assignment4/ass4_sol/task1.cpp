// Programmer: Lily LIN
// Date: 2020.5.11
// Task no: Assignment4_Task1
// Requirements: Write a program including two functions: main function and inverse function. 
/*
	The sub-function inverse will be responsible for inversing the integers in an array inputted as 
	parameter. E.g., the original data in the parameter array are in the sequence 20 10 40 5; after 
	calling of the function inverse, the data in the array are in the sequence 5 40 10 20. The inverse 
	function can include more than one parameter so that the elements in the array can be inversed. 
*/
/*
	The main function will do the following jobs. 
	i. read a sequence of integers (assume that the total number of integers is less than 20)  and 
	store the data from keyboard in an array named Data in the inputted sequence.  
	ii. Call the function inverse，passing the array Data (and other necessary information ) as the 
	actual parameters.  
	iii. Print out the elements in the array Data in their sequence in the array.   
*/
#include <stdio.h>

void inverse(int*, int);

int main(){
	int Data[20];	// integer array to store Data
	int count = 0;	// count the number of Data integers
	printf("Data a sequence of integers seperated by space, and end by enter (for example: 20 10 40 5):\n");
	int temp;	// temp var to accept Data
	do{
		scanf("%d", &temp);	// read a integer
		Data[count] = temp;	// store the integer in Data
		++count;			// increase the counter
	}while(getchar() != '\n' && count < 20);	// end condition

	printf("\nInverse...\n");
	inverse(Data, count);			// call inverse
	printf("\nInverse Result:\n");
	for(int i = 0; i < count; ++i)
		printf("%d ", Data[i]);	// output
	printf("\n");

	fflush(stdin);
	getchar();
	return 0;
}

void inverse(int* seq, int len){
	int head = 0, tail = len - 1;
	while(head < tail){			// keeping swaping head and tail while head < tail
		int temp = seq[head];
		seq[head] = seq[tail];
		seq[tail] = temp;
		++head;
		--tail;
	}
}