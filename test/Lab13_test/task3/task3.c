/**
* task3.c
* @author bulbasaur
* @description 
* @created 2020-05-11T10:28:47.353Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-11T10:48:33.055Z+08:00
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *num;
    int n;
    printf("How many numbers do you want to input?\n");
    scanf("%d", &n);
    // dynamically allocated memory to num
    num = (int*)malloc(sizeof(int)*n);
    printf("Please input the numbers: \n");
    for (int i = 0; i < n; i++)
    {
        /* input the numbers with spaces */
        scanf("%d", &*(num+i));
    }

    for (int j = n; j > 0; j--)
    {
        /* reverse output the numbers */
        printf("%d\t", *(num+(j-1)));
    }
    
    printf("\n");
    
    free(num);
    
    return 0;
}
