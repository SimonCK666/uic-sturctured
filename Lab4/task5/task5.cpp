// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.08
// Task no: Week4#_Task_5
/* Requirements: 
Use switch statement to implement a program that can read and
transfer a GPA grade to GPA point. Output a warning if any invalid
grade is input.
• If GPA is ‘A’ or ‘a’, output 4.00
• If GPA is ‘B’ or ‘b’, output 3.00
• If GPA is ‘C’ or ‘c’, output 2.00
• If GPA is ‘D’ or ‘d’, output 1.00
• If GPA is ‘F’ or ‘f’, output 0.00
*/

#include <stdio.h>
 
int main ()
{
	char grade;
	scanf("%c", &grade);

	//Use switch to switch the conditions
	switch(grade)
    {
    case 'A' :
       printf("4.00\n" );
       break;
	case 'a' :
       printf("4.00\n" );
       break;
    case 'B' :
	   printf("3.00\n" );
       break;
	case 'b' :
	   printf("3.00\n" );
       break;
    case 'C' :
       printf("2.00\n" );
       break;
	case 'c' :
       printf("2.00\n" );
       break;
    case 'D' :
       printf("1.00\n" );
       break;
	case 'd' :
       printf("1.00\n" );
       break;
    case 'F' :
       printf("0.00\n" );
       break;
	case 'f' :
       printf("0.00\n" );
       break;
    default :
       printf("invalid input\n" );
    }
 
    return 0;
	    
}