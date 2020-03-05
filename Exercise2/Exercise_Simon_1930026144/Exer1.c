// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.04
// Task no: Week3#_Task_1
/* Requirements: 
Can you write a program to compute 2^n using while
*/
#include <stdio.h>
int main(){
    int x = 2,n;
    int num=1;
    scanf("%d", &n);
    while(n>=1){
        num *= x;
        n--;
    }
     
    printf("%d",num);
    return 0;
}