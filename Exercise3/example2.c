/**
* example2.c
* @author bulbasaur
* @description 
* @created 2020-03-15T22:05:05.066Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-15T22:09:45.313Z+08:00
*/

#include <stdio.h>
int main() {
    int grade[5] = {1, 2, 3, 4, 5};
    int i, sum;
    float average;

    for (i = 0; i <= 5; i++)
    {
        /* code */
        sum = sum + grade[i];
    }
    
    average = (float)sum / i;

    /* print the average */
    printf("The average is %lf\n", average);
    
    return 0;
}

/*

1. What is this program supposed to do?
Answers:
This program supposed to calculus the average of the grades;

2. Are there any problems in this program?
Answers:
This program does not print anything.
The output is: 
The average is 585047.812500

*/