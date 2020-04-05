/**
* Q3.c
* @author bulbasaur
* @description 
Wite a program to input a string (use %s, the string has no space) and remove those who are not English letters, then print out the result (use %s). For example,
 if the input string is ab345#@ed, then after the non-English-letter characters are removed, the resulting string is abed.

* @created 2020-03-30T19:10:49.917Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-02T21:22:52.237Z+08:00
*/

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #define SIZE 100

// void removeLetters(char str[]);

// int main() {
//     char str[SIZE];
//     printf("Please input a string without spaces:");
//     scanf("%s", str);
    
//     removeLetters(str);
    
//     return 0;
// }

// void removeLetters(char str[]) {
//     int i, j, k;
//     int length, len;
//     // len = strlen(str);

//     char s[SIZE];
//     strcpy(s, str);
    
//     char letters[28] = "abcdefghijklimnopqrstuvwxyz";
//     // length = strlen(letters);
    
//     for (i = 0; letters[i] != '\0'; i++)
//     {
//         /* code */
//         for (j = 0; s[j - 1] != '\0'; j++)
//         {
//             /* code */
//             if (s[j] != letters[i])
//             {
//                 /* code */
//                 str[j] = s[j++];
                
//             }
            
//         }
        
//     }

//     printf("%s\n", str);
    
// }

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
        while (!( (line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0') )
        {
            for(j = i; line[j] != '\0'; ++j)
            {
                line[j] = line[j+1];
            }
            line[j] = '\0';
        }
    }
    printf("Output: ");
    puts(line);
    return 0;
}