// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.02
// Task no: Week3#_Task_2
/* Requirements: 
Please describe the output for each input and explain why the
these results are produced as comments at the end of the
program.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
int percentage, x;
char ch1, ch2;
scanf("%d%c%c%d”, &percentage", &ch1, &ch2, &x);
printf("%d%% %c%c %d is %f\n",percentage, ch1, ch2, x, 1.0 * x *percentage / 100);

system("pause");
return 0;
}
/* 
10of100:  It did not exist the result because we did not fill all characters.
10 of100:  It did not exist the result because we did not fill all characters.
10 o f 100: "10% of 100 is 10.000000": The format is 1.0 * 100 * 10 / 100; 
*/