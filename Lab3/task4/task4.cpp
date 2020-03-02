// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.02
// Task no: Week3#_Task_4
/* Requirements:
Find out the output of the following program before running it in
the computer. Then check your output with computer. Put your
output as a comment in the end of the program and explain the
use of %7d and %-7d
*/
#include <stdio.h>
int main ()
{
int x = 30, y =15;
int temp1, temp2;
temp1 = x/++y;
printf("temp1= %d\t y= %d\n", temp1, y);
printf ("temp1 = %-7d\t y= %d\n", temp1 , y);

y=15;
temp2 = x/y++;
printf("temp2 = %7d\t y= %d\n", temp2 , y);

return 0;
}
/*
The result was
temp1= 1         y= 16
temp1 = 1        y= 16
temp2 =       2  y= 16;
%7d output an integer of length 7 bits; If the length is less than 7 bits, align it to the right and fill them with blank spaces before.
%-7d output an integer of length 7 bits; If the length is less than 7 bits, align it to the left and fill them with blank spaces before.
*/
