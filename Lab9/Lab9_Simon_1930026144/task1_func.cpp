// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.04.13
// Task no: Week_9_Task_1
/* Requirements: 
Write a program that includes two functions: main and stringLength.
• The prototype of stringLength is
int stringLength(char s[])
The return value of this function is the length of s.
• The main function is responsible for reading a string and calling
stringLength to get the length of the inputted string. The main
function will also print out the length of the string. Assume the length of the
string is less than 50.
Requirements:
• The project should have three files:
–one hpp file which is put under the "Header files" folder
– two cpp files which are put in the "Source files" folder. One cpp file includes the function
stringLength; another cpp file includes the function main.
• The hpp file contains the prototype of the function stringLength.
• Include the hpp file with #include "###.hpp" in the file where the stringLength
function will be called (i.e., in this task, it is the file that includes the main function).

*/

int stringLength(char str[]) {
	int i = 0;
	// Calculus the length of the string
	while ( str[i++] != '\0');
	return i - 1;
}