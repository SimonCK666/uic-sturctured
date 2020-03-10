// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.10
// Task no: Week3#_Assignment1_1
/* Requirements:
Answer the questions (put answers as the comments below the program):
• When you build this program, what are the errors there?
• After you fix the errors and re-build the project, are there warnings? Why?
• Fix the program by removing errors and warnings (assume the initial value of i is 0).
*/

#include <stdio.h>
int main()
{
	int i = 0, j = 5;
	char ch;
	float f;

	//scanf("%c", ch);
	scanf("%c", &ch);

	printf("%d is the ASSCII code of '%c'\n", ch, ch);
	printf("the value of i is %d\n", i);

	i = ch;
	printf("the value of i is %d\n", i);
	
	return 0;
}

/*

1>  e:\uic_structured\assignment1\ass1\ass1.cpp(20): error C3861: 'scanf': identifier not found
	e:\uic_structured\assignment1\ass1\ass1.cpp(22): error C3861: 'printf': identifier not found
	e:\uic_structured\assignment1\ass1\ass1.cpp(23): error C3861: 'printf': identifier not found
	e:\uic_structured\assignment1\ass1\ass1.cpp(26): error C3861: 'printf': identifier not found

2> Yes, there are some warnings when I rebuild this progrom. One of them is "The variable 'ch' is being used without being initialized". 
   Because when this program used the 'scanf' function, here missed the '&' when this function find the address from the variable 'ch';
   The other one is that "The variable 'i' is being used withou being initialized", that is clear that the variable 'i' was used before we initialized itself. 
   So we need use every variable after initializing it.

3> After fixed it, when I input '3', the output is:
	51 is the ASSCII code of '3'
	the value of i is 0
	the value of i is 51

*/