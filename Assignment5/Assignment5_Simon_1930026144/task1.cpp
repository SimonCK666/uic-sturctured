/**
* task1.c
* @author Simon
* @description 
Input a sequence of data (assume end with -1, -1 is not included) and save it in the array. Then set up a
pointer to point to the first data of the array, output the data in array one by one by moving the pointer.
Please also output the address of each data in the array. Assume that there are no more than 20 data
items. Note: You can decide the data type.

* @created 2020-05-16T11:01:35.774Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-22T21:01:07.467Z+08:00
*/


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i = 0;
    int num[20];
    int *np = num;
    printf("Please input the number one by one (End with -1): \n");
    scanf("%d", &n);
    while (n != -1)
    {
        /* input the number one by one and end with -1 */
        num[i++] = n;
        scanf("%d", &n);
    }
    
    printf("The Numbers' Values and Addresses are: \n");

    for (int j = 0; j < i; j++)
    {
        /* output the values of pointers */
        printf("%d\t\t", *(np+j));
    }

    printf("\n");
    
    for (int k = 0; k < i; k++)
    {
        /* output the addresses of the pointers */
        printf("%p\t", (np+k));
    }
    
    printf("\n");
    
    return 0;
}

