/**
* Q2.c
* @author bulbasaur
* @description 

Use looping to write a program to decide if an input natural number is a prime number.

* @created 2020-03-30T18:51:07.510Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-30T19:05:15.268Z+08:00
*/

#include <stdio.h>
int judgePrime(int num);

int main() {
    int num, a;
    printf("Please input an integer:");
    scanf("%d", &num);

    a = judgePrime(num);
    if (a == 0)
    {
        /* code */
        printf("%d is a prime number.\n", num);
    } else if (a == 1)
    {
        /* code */
        printf("%d is not a prime number.\n", num);
    }

    
    return 0;
}

int judgePrime(int num) {
    int i;
    
    if (num == 1 || num == 0)
    {
        /* code */
        return 1;
        
    }
    
    if (num == 2)
    {
        /* code */
        return 0;
        
    }
    
    
    for (i = 2; i < num; i++)
    {
        /* code */
        if (num % i == 0)
        {
            /* code */
            return 1;
            
        } else
        {
            /* code */
            return 0;
            
        }
         
    }
    
}