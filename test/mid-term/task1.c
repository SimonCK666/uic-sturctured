/**
* task1.c
* @author bulbasaur
* @description 
* @created 2020-04-07T10:25:26.673Z+08:00
* @copyright None 
* None
* @last-modified 2020-04-07T11:00:08.455Z+08:00
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