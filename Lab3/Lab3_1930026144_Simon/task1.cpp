// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.02
// Task no: Week3#_Task_1
/* Requirements: 
1.
Edit and run this program and see the output.
2.
Change int to float , and check the result again.
3.
Then change three %d into %f and check the result again.
4.
Then add .1 between and f in the first %f , and check the result
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
//int value1, value2, sum;
float value1, value2, sum;
value1 = 15;
value2 = 30;
sum = value1 + value2;
//printf("The sum of %d and %d is %d\n", value1, value2, sum);
//printf("The sum of %f and %f is %f\n", value1, value2, sum);
printf("The sum of %.1f and %f is %f\n", value1, value2, sum);

system("pause");

return 0;
}
// The original code's result was "The sum of 15 and 30 is 45".
// When changed int to float, the result was "The sum of 0 and 1076756480 is 0".
// When changed three %d into %f, the result was "The sum of 15.000000 and 30.000000 is 45.000000".
// When add .1 between % and f in the first %f, the result was "The sum of 15.0 and 30.000000 is 45.000000".
