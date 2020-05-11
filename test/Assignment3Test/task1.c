/**
* task1.c
* @author bulbasaur
* @description 
* @created 2020-05-03T09:24:28.892Z+08:00
* @copyright None 
* None
* @last-modified 2020-05-03T10:52:11.537Z+08:00
*/

#include <stdio.h>

#define SIZE 20
void inverse(int data[SIZE], int count);
int main() {
    int data[SIZE], count;
    // Input the number of inputs
    printf("How many intergers do you want to input: ");
    scanf("%d", &count);
    printf("Please input some integers with spaces: ");
    
    for (int j = 0; j < count; j++)
    {
        /* input integers with spaces */
        scanf("%d", &data[j]);
    }
    
    // Get the addresses of array data
    int *p;
    p = data;
    
    // Call the function
    inverse(data, count);
    
    for (int i = 0; i < count; i++)
    {
        /* Output the inverse integers one by one */
        printf("%d\t", *(data + i));
    }

    // Test
    // printf("%d", data[2]);
    // printf("%d",sizeof(data)/sizeof(data[0]));
    

    printf("\n");
    
    return 0;
}

void inverse(int data[], int count) {
    for (int i = 0; i < (count + 1) / 2; i++)
    {
        /* according to the addresses of indexes to reverse the indexes */
        int j = count - 1 - i;
        int temp = data[i];
        data[i] = data[j];
        data[j] = temp;
    }
    
}