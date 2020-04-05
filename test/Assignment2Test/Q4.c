/**
* Q4.c
* @author bulbasaur
* @description 
* @created 2020-04-01T18:05:28.968Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-02T21:11:14.194Z+08:00
*/



#include <stdio.h>
#include <string.h>
// The custom macros
#define SIZE 50

//Definite the function to sor numbers
void sort_numbers_ascending(int number[], int count);


int main() {
	int str[SIZE];
    int num, count, i = 0, j;
    printf("How many intergers do you want to input: ");
    scanf("%d", &count);
    printf("Please input some integers with spaces (End with -1): ");
    scanf("%d", &num);
    
    while (num != -1)
    {
        /* code */
        str[i++] = num;
        scanf("%d", &num);
    }

    //count = strlen(str);
    sort_numbers_ascending(str, count);
    
    printf("Numbers in ascending order:");
    for (j = 0; j < i; j++)
    {
        /* code */
        if (str[j] > 0)
        {
            /* code */
            printf("%d\t", str[j]);

        }
        
    }
    
    return 0;

}

// Function to sort numbers in ascending
void sort_numbers_ascending(int number[], int count) {
	int temp, i, j, k;
	for (j = 0; j < count; ++j) {
		for (k = j + 1; k < count; ++k) {
			// Sort numbers
			if (number[j] > number[k]) {
				temp = number[j];
				number[j] = number[k];
				number[k] = temp;
			}
		}
	}

	
	printf("\n");
}



