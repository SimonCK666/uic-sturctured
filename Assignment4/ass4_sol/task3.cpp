// Programmer: Lily LIN
// Date: 2020.5.11
// Task no: Assignment4_Task3
// Requirements: Write a recursive function int strchar (char str[], char ch) which will 
// return the number of occurrences of the ch in the str. 
// For example, strchar(“abac”, ’a’) will return 2. 
// Also write a main function which will call strchar and print return value. 

#include <stdio.h>
int strchar (char*, char ch);
int main(){
	char input[50];	// store the input string
	char ch;		// the character to be counted
	printf("Input a string: ");
	scanf("%s", input);
	printf("Input a character to be counted: ");
	fflush(stdin);	// !!clear the input buffer
	scanf("%c", &ch);
	printf("The number of occurrences of \'%c\' in \"%s\" is %d.\n", ch, input, strchar(input, ch));
	
	fflush(stdin);
	getchar();
	return 0;
}
int strchar (char* str, char ch){
	if(*str == '\0') return 0;	// end of char, stop recursion
	else if(*str == ch) return strchar(str+1, ch)+1;	// if find a target, plus one
	else return strchar(str+1, ch);	// if not a target, do nothing but search the sub-string
}