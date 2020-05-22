// Programmer: Lily LIN
// Date: 2020.5.11
// Task no: Assignment4_Task3
// Requirements: Write a program to read students' names and scores from keyboard 
// and store the information in an array, 
// then sort them according to scores in descending order and print out the sorted list. 
// Assume that there are no more than 20 students. 
// The program must satisfy the following requirements. 
/*
	a. The program should contain two functions: main, sort. 
	b. The main function reads information from keyboard，calls the sort function, passes information 
		to it for sorting and finally prints out the sorted information. 
		Each student information includes name and score. It is assumed the input from the keyboard ends 
		when score is -1. 
	For example, if the input is 
		Judy 10 
		Nina 100 
		Hello -1 
	Then the output is 
		Nina 100 
		Judy 10 
*/

#include <stdio.h>
#include <string.h>

struct Student{		// define a structure to store stu info
	char str[10];
	int marks;
};

void sort(Student*, int);	// declare sort, after definition of student

int main(){
	struct Student stu[20];
	int i = -1;		// count the length of input
	printf("enter info of every student (for example: Judy 10): \n");
	do{
		++i;
		scanf("%s %d", stu[i].str, &stu[i].marks);	// accept input
	}while(stu[i].marks != -1);
	sort(stu, i);	// call func to sort
	printf("\nSorting Result:\n");
	for(int j = 0; j < i; ++j)	// print the sorted result
		printf("%s %d\n", stu[j].str, stu[j].marks);
	fflush(stdin);
	getchar();
	return 0;
}
void sort(Student* stu, int len){
	struct Student temp;
	// bubble sort
	for(int i = 0; i < len; ++i)
		for(int j = i+1; j < len; ++j){
			if(stu[i].marks < stu[j].marks){
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
}
