// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.02
// Task no: Week3#_Task_3
/* Requirements: 
Write
a program to read two integers and calculate the sum,
subtraction, product, quotient and remainder The output should
look like
_ + _ = _
_‐_ =
_ * _ =
_ / _ =
_%_ = _
where _ should be replaced by input and output values.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c1,c2,c3,c4,c5;
	scanf("%d %d",&a,&b);

	c1 = a + b;
	c2 = a - b;
	c3 = a * b;
	c4 = a / b;
	c5 = a % b;
	printf("%d + %d = %d\n",a,b,c1);
	printf("%d - %d = %d\n",a,b,c2);
	printf("%d * %d = %d\n",a,b,c3);
	printf("%d / %d = %d\n",a,b,c4);
	printf("%d % % %d = %d\n",a,b,c5);

	system("pause");
	return 0;
}