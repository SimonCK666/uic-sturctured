// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.04
// Task no: Week3#_Task_2
/* Requirements: 
Can you write a program to compute 2^n using do while
*/
#include <stdio.h>
int main() {
    int x = 2,n;
    int num=1;
    scanf("%d", &n);
    do {
        num *= x;
        n--;
    }while(n>=1);
     
    printf("%d",num);
    return 0;
}