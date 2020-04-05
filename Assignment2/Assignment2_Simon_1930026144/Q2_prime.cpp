// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.30
// Task no: Assignment_2_Q2_Prime
/* Requirements: 
Use looping to write a program to decide if an input natural number is a prime number.

*/


#include <stdio.h>
/* implicit declaration of function 'judgePrime' */
int judgePrime(int num);

int main() {
    int num, a;
	/* Input the number */
    printf("Please input an integer:");
    scanf("%d", &num);

	/* Call the function */
    a = judgePrime(num);

	/* judge and print whether number is prime number */
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
        /* 1 and 0 is not a prime number */
        return 1;
        
    }
    
    if (num == 2)
    {
        /* 2 is a prime numeber */
        return 0;
        
    }
    
    
    for (i = 2; i < num; i++)
    {
        /* judge the number whether is a prime number */
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