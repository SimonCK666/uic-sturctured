//Programmer: Simon(杨涵)
//Student ID: 1930026144
//Date: 2020.02.24
//Task NO: Week_2_Task_3
/*Requirements:
The function sizeof is to used to get the number of bytes used for storing
a data of certain type in computer For example, the result of sizeof(int)
is 4 and result of sizeof(char) is 1 Please write a program and give the
following outputs where is replaced with a value obtained from sizeof.
*/
#include <stdio.h>
int main() {

	printf("Number of bytes used to store a short int type variable is %ld bytes\n",sizeof(short int));
	printf("Number of bytes used to store a char type variable is %ld bytes\n",sizeof(char));
	printf("Number of bytes used to store a double type variable is %ld bytes\n",sizeof(double));
	printf("Number of bytes used to store a float type variable is %ld bytes\n",sizeof(float));
	printf("Number of bytes used to store a long int type variable is %ld bytes\n",sizeof(long int));
	printf("Number of bytes used to store an int type variable is %ld bytes\n",sizeof(int));

	return 0;
}