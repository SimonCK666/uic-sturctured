/**
* task2.c
* @author bulbasaur
* @description 
* @created 2020-04-07T10:25:32.672Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-07T12:04:12.915Z+08:00
*/


#include <stdio.h>
#include <string.h>
#define SIZE 50

// Define the functions
int isLetter(char c);
void printPattern (char c, int line);
void formString(char c);
void sortString (char c);

int main()
{
    char c;
    int line;
    printf("Please input a character: ");
 
    // Input the character
    scanf("%c", &c);

    // Call function
    int check = isLetter(c);

    while (check == 0)
    {
        /* Reinput */
        printf("Your input is not correct, please reinput a character: ");
        scanf("%c", &c);
        check = isLetter(c);
        if (check == 1)
        {
            /* leave loop */
            break;
        }
    }

    // Input the line
    printf("Please input how many lines do you want to print: ");
    scanf("%d", &line);

    // Draw the picture
    printPattern(c, line);

    // Form the string
    formString(c);

    // Sort the string
    char str[] = c;
    void sortString (str);
    

    // Sum the string
    

    

    
    

    return 0;
}

int isLetter(char c)
{
    if( (c>='a' && c<='z') || (c>='A' && c<='Z')) {
        /* is letter */
        return 1;
    } else
    {
        /* not Letter */
        return 0;
    }
    
}


void printPattern (char c, int line) {
    int i, j, z;
    
    for (i = line; i >= 0; i--)
    {
        for (j = 0; j <= line-i; j++)
        {
            /* print spaces */
            printf(" ");
        }

        for (z = 0; z <= line-j; z++)
        {
            /* print the character */
            printf("%c", c);
        }
        
        printf("\n");
        
        
    }
    
}


void formString(char c) {
    char str[SIZE] = "abcdefghijk";
    str[0] = c;
    char i;
    
    for (i = 0; i <= strlen(str); i++)
    {
        /* code */
        if (c == str[10])
        {
            /* code */
            printf("%c", c);
        } else if (c == str[0])
        {
            for (int j = 0; j < 10; j++)
            {
                /* code */
                printf("%c", str[j]);
            }
            
        } else if (c == str[1])
        {
            for (int j = 1; j < 10; j++)
            {
                /* code */
                printf("%c", str[j]);
            }
            
        } else if (c == str[2])
        {
            for (int j = 0; j < 10; j++)
            {
                /* code */
                printf("%c", str[j]);
            }
            
        } else if (c == str[3])
        {
            for (int j = 3; j < 10; j++)
            {
                /* code */
                printf("%c", str[j]);
            }
            
        } else if (c == str[4])
        {
            for (int j = 4; j < 10; j++)
            {
                /* code */
                printf("%c", str[j]);
            }
            
        } else if (c == str[5])
        {
            for (int j = 5; j < 10; j++)
            {
                /* code */
                printf("%c", str[j]);
            }
            
        } else if (c == str[6])
        {
            for (int j = 6; j < 10; j++)
            {
                /* code */
                printf("%c", str[j]);
            }
            
        } else if (c == str[7])
        {
            for (int j = 7; j < 10; j++)
            {
                /* code */
                printf("%c", str[j]);
            }
            
        } else if (c == str[8])
        {
            for (int j = 8; j < 10; j++)
            {
                /* code */
                printf("%c", str[j]);
            }
            
        } else if (c == str[9])
        {
            for (int j = 9; j < 10; j++)
            {
                /* code */
                printf("%c", str[j]);
            }
            
        } else if (c == str[10])
        {
            for (int j = 10; j < 10; j++)
            {
                /* code */
                printf("%c", str[j]);
            }
            
        } 
        
        
        
    }
    
    
}


// Function to sort numbers in descending
void sortString() {
    char line[SIZE];
	int i = 0, count = 0;
	printf("Please input one line of characters:");
    
	// input the string
	scanf("%s", line);
    int count = strlen(line);
    char temp;
	int  i, j, k;
	for (j = 0; j < count; ++j) {
		for (k = j + 1; k < count; ++k) {
			// Sort string
			if (line[j] < line[k]) {
				temp = line[j];
				line[j] = line[k];
				line[k] = temp;
			}
		}
	}

	/* String in descending order: */
	printf("String in descending order:\n");
	for (i = 0; i < count; ++i) {
		printf("%s\t", line[i]);
	}
	
	printf("\n");
}


void sumString() {
    char line[SIZE];
	int i = 0, count = 0;
	printf("Please input one line of characters:");
    
	// input the string
	scanf("%s", line);
    
}