// Programmer: Simon
// Student ID: 1930026144
// Date: 2020.03.30
// Task no: Assignment_2_Q2_Prime
/* Requirements: 
Wite a program to input a string (use %s, the string has no space) and remove those who are not English letters,
then print out the result (use %s). For example, if the input string is ab345#@ed,
then after the non-English-letter characters are removed, the resulting string is abed.

*/

#include<stdio.h>
 
int main()
{
    char line[150];
    int i, j;
    printf("Please input a string: ");
    
    /* Input the string; (sizeof line/ sizeof line[0] ) is calculating the length of the array; Stdin is standard input, usually what the keyboard enters into the buffer; */ 
    fgets(line, (sizeof line / sizeof line[0]), stdin);
 
    for(i = 0; line[i] != '\0'; ++i)
    {
		/* Judge whether there are some characters which are not the letters */
        while (!( (line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0') )
        {
			/* Delete the characters which are not letters, then let the latter characters fill in to the former*/
            for(j = i; line[j] != '\0'; ++j)
            {
                line[j] = line[j+1];
            }
            line[j] = '\0';
        }
    }

    printf("Output: ");
	/* Output the array */
	puts(line);
    return 0;
}