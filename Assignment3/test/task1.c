/**
* task1.c
* @author bulbasaur
* @description 
* @created 2020-04-17T19:17:40.770Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-17T20:24:02.992Z+08:00
*/

#include <stdio.h>
#include <string.h>

#define SIZE 10

void sortNumber(int str[]);
int main() {
    int str[SIZE] = {3, 10, 15, 30, 55, 77};
    int insertNumber, length = 5;
    printf("Please input the instert integer: ");
    scanf("%d", &insertNumber);

    // Sort the orgainal list
    sortNumber(str); 

    for (int j = length; j > 0; j--)
    {
        /* code */
        if (insertNumber > str[j])
        {
            /* code */
            for (int k = length + 1; k > j; k--)
            {
                /* code */
                str[k + 1] = str[k];
            }
            str[j + 1] = insertNumber;
            length += 1;
            break;
        }
        
    }
    
    
    printf("After inserting a number, the list is : ");
    for (int i = 0; i < 7; i++)
    {
        /* code */
        printf("%4d\t", str[i]);
    }
    printf("\n");

    return 0;
}

void sortNumber(int str[]) {
    int temp = 0;
    
    for (int i = 0; i < 6; i++)
    {
        /* code */
        for (int k = i + 1; k < 6; k++)
        {
            /* code */
            if (str[i] > str[k])
            {
                /* code */
                temp = str[i];
                str[i] = str[k];
                str[k] = temp;
            }
            
        }
        
    }
    
    printf("Before inserting a number, the list is: ");
    for (int i = 0; i < 6; i++)
    {
        /* code */
        printf("%4d\t", str[i]);
    }
    
    printf("\n");
    
}