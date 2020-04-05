// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.29
// Task no: Week_7_Task_2
/* Requirements: 
Write two functions: main funtion and a sub-function IsTrangle.
The IsTriangle function will decide if three edges will form a
triangle
For example, IsTriangle(3, 4, 5) will print out “It is trangle”;
IsTriangle(3, 4, 10) will print out “It is not a triangle”;
IsTriangle (-3, 6, 1) will print out “Illegal input”. The return
type of IsTriangle is void.
The main function will read length of three edges from keyboard
and call the IsTriable function with inputted lengths.
*/


#include <stdio.h>
/* implicit declaration of 'isTrangle' */
void isTrangle(int a, int b, int c);
int main() {
    int a, b, c;
	/* Input the length */
    printf("Please input three length with space:");
    scanf("%d %d %d", &a, &b, &c);

	/* Call the function */
    isTrangle(a, b, c);
    
    return 0;
}

/* Definite the function */
void isTrangle(int a, int b, int c) {
    if (a + b > c && a - b < c)
    {
        /* judge whether the length could be a trangle */
        printf("It is a triangle.\n");
    } else if (a <= 0 || b <= 0 || c <= 0)
    {
        /* Keep the length is integer */
        printf("Illegal input.\n");
    } else
    {
        /* judge the length cannot be a trangle */
        printf("It is not a triangle.\n");
    }
    
    
}